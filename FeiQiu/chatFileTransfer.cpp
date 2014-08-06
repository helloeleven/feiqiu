#include"chatdialog.h"
#include "ui_chatdialog.h"
#include"FileInformation.h"



void ChatDialog::on_sendfile_clicked()
{
   ui->stackedWidget->setCurrentIndex(1);
}

//---------------------------服务器端-------------------------------
void ChatDialog::startServer()
{


    bytesReceived = 0;
    QString addr = pb->logHostIp;
    qDebug()<<"StartServer::fileName"<<fileName;
    udpService->sendMessage(0,QHostAddress(addr),fileName,7777);  //向客户端发送确认消息

    while (!tcpServer.isListening() && !tcpServer.listen(QHostAddress::Any,4444))
    {
        break;
    }


}

void ChatDialog::refuse()
{
    tcpServer.close();
    ui->stackedWidget->setCurrentIndex(0);
    QString msg = tr("■你拒绝了来自%1的文件%2传送请求!").arg(pb->logHostIp).arg(fileName);
    ui->ShowMessage->append(msg);

    udpService->sendMessage(2,QHostAddress(pb->logHostIp),fileName,7777);  //向客户端发送消息


}

void ChatDialog::acceptConnection()
{
    tcpServerConnection = tcpServer.nextPendingConnection();//获得一个TCP连接
    connect(tcpServerConnection, SIGNAL(readyRead()),this, SLOT(updateServerProgress()));
    //connect(tcpServerConnection, SIGNAL(error(QAbstractSocket::SocketError)),
    //this, SLOT(displayError(QAbstractSocket::SocketError)));
    tcpServer.close();
}


void ChatDialog::updateServerProgress()
{
    QDataStream in(tcpServerConnection);
    in.setVersion(QDataStream::Qt_4_3);

    if(bytesReceived <= sizeof(qint64)*2)
    {//如果接收到的数据小于16个字节，那么是刚开始接收数据
        if((tcpServerConnection->bytesAvailable() >= sizeof(qint64)*2)&&(fileNameSize ==0))
        {//接收数据总大小信息和文件名大小信息
            in >> TotalBytes >> fileNameSize;
            bytesReceived += sizeof(qint64)*2;
        }
        if((tcpServerConnection->bytesAvailable() >= fileNameSize)&&(fileNameSize !=0))
        {//接收文件名，并建立文件
            in >> fileName;
            bytesReceived += fileNameSize;
            localFile = new QFile(fileName);
            if (!localFile->open(QFile::WriteOnly ))
            {
                QMessageBox::warning(this, tr("应用程序"),
                tr("无法读取文件 %1:\n%2.").arg(fileName).arg(localFile->errorString()));
                return;
            }
       }
       else
       {
          return;
       }
    }

    qDebug()<<TotalBytes;

    if (bytesReceived < TotalBytes)
    {
        bytesReceived += tcpServerConnection->bytesAvailable();
        inBlock = tcpServerConnection->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }

        ui->ServerProgressBar->setMaximum(TotalBytes);
        ui->ServerProgressBar->setValue(bytesReceived);
        qDebug()<<bytesReceived;
        ui->ServerMsg->setText(tr("已接收 %1KB").arg(bytesReceived / (1024)));

    if (bytesReceived == TotalBytes)
    {
        tcpServerConnection->close();
        localFile->close();
        QString msg = tr("■来自%1的文件%2接收完成!").arg(pb->logHostIp).arg(fileName);
        ui->ShowMessage->append(msg);
        ui->stackedWidget->setCurrentIndex(0);

        //向客户端发送接受完成确认消息
        msg = tr("我完成了您的文件%1的接收!").arg(fileName);
        udpService->sendMessage(3,QHostAddress(pb->logHostIp),msg,7777);  //向客户端发送确认消息
    }
}

//------------------客户端------------------------------------

void ChatDialog::startClient()  //发送按钮
{
    bytesWritten = 0;
    QString addr = pb->logHostIp;
    qDebug()<<"file0000000000000000000000"<<addr;
    qDebug()<<"file0000000000000000000000"<<fileName;
	if(fileName == "")
    {
        QMessageBox::warning(this,tr("警告"),tr("请选择一个要发送的文件"));
        return;
    }

    udpService->sendMessage(1,QHostAddress(addr),fileName,7777);


    QString msg = tr("■您向%1发送了一个文件：%2!").arg(pb->logHostIp).arg(fileName);
    ui->ShowMessage->append(msg);

}

void ChatDialog::startTransfer()
{
    qDebug("file1111111111111111111111111111111111");
    localFile = new QFile(fileName);
    if (!localFile->open(QFile::ReadOnly ))
    {
        QMessageBox::warning(this, tr("应用程序"),
        tr("无法读取文件 %1:\n%2.")
        .arg(fileName)
        .arg(localFile->errorString()));
        return;
    }

    QString name  = localFile->fileName();
    TotalBytes = localFile->size();//文件总大小
    QDataStream sendOut(&outBlock, QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_3);

    QString currentFile = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
    //依次写入总大小信息空间，文件名大小信息空间，文件名---仅是文件名不含路径，没必要含路径
    sendOut << qint64(0) << qint64(0) << currentFile;//这里的总大小是文件名大小等信息和实际文件大小的总和
    TotalBytes += outBlock.size();
    sendOut.device()->seek(0);
    //totalBytes是文件总大小，即两个quint64的大小+文件名+文件实际内容的大小
        //qint64((outBlock.size() - sizeof(qint64)*2))得到的是文件名大小
    sendOut << TotalBytes << qint64((outBlock.size() - sizeof(qint64) * 2));
    //发送完头数据后剩余数据的大小，即文件实际内容的大小
    bytesToWrite = TotalBytes - tcpClient.write(outBlock);
    qDebug() << currentFile << TotalBytes;
    outBlock.resize(0);
}


void ChatDialog::updateClientProgress(qint64 numBytes)
{
    bytesWritten += (int)numBytes;//已经发送数据的大小
    if (bytesToWrite > 0)//如果已经发送了数据
    {
        //每次发送loadSize大小的数据，这里设置为4KB，如果剩余的数据不足4KB，
              //就发送剩余数据的大小
     outBlock = localFile->read(qMin(bytesToWrite, loadSize));
    //就发送剩余数据的大小
     bytesToWrite -= (int)tcpClient.write(outBlock);
     outBlock.resize(0); //清空发送缓冲区
    }
    else
    {
      localFile->close();//如果没有发送任何数据，则关闭文件
      ui->stackedWidget->setCurrentIndex(0);
    }
       //更新进度条
    ui->ClientProgressBar->setMaximum(TotalBytes);
    ui->ClientProgressBar->setValue(bytesWritten);
    //clientStatusLabel->setText(tr("已发送 %1MB").arg(bytesWritten / (1024 * 1024)));
}


void ChatDialog::openFile()
{
    fileName = QFileDialog::getOpenFileName(this);
    if(fileName == "")
        return;
    FileInformation info(fileName);
    info.getFileInformation();


    ui->tableWidget->setItem(0,0,new QTableWidgetItem(info.fileName));
    ui->tableWidget->setItem(0,1,new QTableWidgetItem(info.fileType));
    QString size = tr("%1字节").arg(QString::number(info.fileSize,10));
    ui->tableWidget->setItem(0,2,new QTableWidgetItem(size));
    ui->tableWidget->setItem(0,3,new QTableWidgetItem(fileName));
    ui->tableWidget->resizeColumnsToContents();



}




