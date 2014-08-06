#include "chatdialog.h"
#include "ui_chatdialog.h"

//-------------------------------------消息管理------------------------------------------
void ChatDialog::on_SendMessage_clicked()
{
    qDebug(__func__);
    if(!chatMark)
    {
        SystemInformation sysinfo;
        PersonLoginInfo *logInfo = new PersonLoginInfo(sysinfo.getHostName(),sysinfo.getHostIP());

        logInfo->firstMsg = ui->MessageSend->toPlainText();
        noticeMsg = new UdpConnection();
        noticeMsg->sendMessage(6,*logInfo,QHostAddress(pb->logHostIp),6666);
    }

        if(ui->MessageSend->toPlainText() == "")
        {
           ui->MessageSend->setText(tr("消息为空!"));
        }
        else
        {
            QString msg = ui->MessageSend->toPlainText();
            QString addr = pb->logHostIp;
            udpService->sendMessage(3,QHostAddress(addr),msg,7777);
            qDebug()<<msg;
            DisplayMessage(0,msg);
            ui->MessageSend->clear();

        }
}

void ChatDialog::receiveMessage()
{
    while(receive->hasPendingDatagrams())
    {
        qint16 type;
        QString IP;
        QString value;
        udpService->receiveMessage(receive,type,IP,value);
        if(type == 1)  //客户端发过来的文件传送消息
        {
            qDebug("file22222222222222222222222222222222222");
            QString msg = QString(tr("■%1 发过来 %2，请接收...")).arg(IP).arg(value);
            ui->ShowMessage->append(msg);
            ui->stackedWidget->setCurrentIndex(2);

        }
        else if(type == 0)  //服务器端发过来的确认消息
        {
            qDebug()<<"connectToHost::"<<pb->logHostIp;
            tcpClient.connectToHost(pb->logHostIp,4444);
        }
        else if(type == 2)  //服务器拒绝消息
        {
             QString msg = QString(tr("■%1拒绝了您的文件发送请求...")).arg(IP);
             ui->ShowMessage->append(msg);
             ui->stackedWidget->setCurrentIndex(0);
        }
        else if(type == 3)
        {
            if(value == "OK" )
            {
              if(chatMark == false)
              {
                  chatMark = true;
                  UdpConnection *noticeMsg = new UdpConnection();
                  noticeMsg->sendMessage(3,QHostAddress(IP),"OK",7777);
              }

            }
            else
            {
                DisplayMessage(1,value);
            }

        }
        else if(type == 4)
        {
            qDebug()<<"shakexxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
            Counter=0;
            curPos=this->pos();
            M_Timer->start();
            QString msg = tr("■%1向您发送了一个窗口抖动！").arg(IP);
            ui->ShowMessage->append(msg);

        }

    }
}


#include <QDateTime>
void ChatDialog::DisplayMessage(int flag,QString value)
{
   // ui->ShowMessage->setText(value);

    QString ip;
    QColor crl;
    if(flag == 0){
        ip = SystemInformation().getHostIP();
        crl = QColor(255,0,0);
    }else if(flag == 1){
        ip =pb->logHostIp;
        crl = QColor(0,0,255);
    }

    QString time = QDateTime::currentDateTime().toString("hh:mm:ss ap");
    ui->ShowMessage->setTextColor(Qt::blue);
    QString title = ip + "   "+time;
    ui->ShowMessage->append(title);
    ui->ShowMessage->setTextColor(crl);
    ui->ShowMessage->append(value);
}

