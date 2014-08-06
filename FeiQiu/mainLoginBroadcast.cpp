#include "mainwindow.h"
#include "ui_mainwindow.h"


//-------------------------------上线广播--------------------------------------------
void MainWindow::SendBroadcast(QString Address,qint32 type)
{
    qDebug(__func__);
    QByteArray data;
    QDataStream out(&data, QIODevice::ReadWrite);

    PersonLoginInfo info(HostName,HostIP);
    FileInformation fileInfo;
     out<<type;
     out<<fileInfo;
     out<<info;


    qint64 v = udpsocket->writeDatagram(data,data.length() ,QHostAddress(Address),port);
    qDebug()<< "send::" << v;


}

void MainWindow::RecvBroadcastInfo()
{
     qDebug(__func__);
    while(udpsocket->hasPendingDatagrams())
    {
        QByteArray data;
        int type;

        QDataStream in(&data, QIODevice::ReadOnly);


        data.resize(udpsocket->pendingDatagramSize());
        udpsocket->readDatagram(data.data(), data.size());



        in>>type;
        in>>rfileInfo;
        in>>rfriendInfo;

        if(type == 4 || type == 5)
        {
            qDebug("ddddddddddddddddddddddddddddd");
            RecvFileInfo(rfileInfo,type);
            return;
        }
        if(type == 6)
        {

            SysTrayIconTwinkle();

        }

        qDebug()<<"Recv::"<<rfriendInfo.logHostIp;
        qDebug()<<"Recv::"<<type;

        for(vector<PersonLoginInfo>::iterator it = LoginInfo.begin();
                   it!=LoginInfo.end(); ++it)
        {
             if(it->logHostIp == rfriendInfo.logHostIp)
             {
                 if(type == 1)
                 {
                     LoginInfo.erase(it);
                     return;
                 }
                 else if(type == 3)
                 {
                     LoginInfo.erase(it);
                     LoginInfo.push_back(rfriendInfo);
                     return;
                 }
                 else
                 {
                     return;
                 }
             }
        }

        if(type != 1)   //判断是否为下线广播
        {
            list->AddBuddy(rfriendInfo);
            QString name = rfriendInfo.logInfo.userName == "" ? rfriendInfo.logHostName : rfriendInfo.logInfo.userName;
            emit initMsg(name,rfriendInfo.logHostIp);
            LoginInfo.push_back(rfriendInfo);
            SendBroadcast(rfriendInfo.logHostIp,2);
        }
    }
}


void MainWindow::RecvFileInfo(FileInformation info,int type)
{
      qDebug(__func__);


      if(type == 4)
         filelist.push_back(info);
      else if(type == 5)
      {
           qDebug("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
           PersonLoginInfo *pinfo = new PersonLoginInfo(info.ServerName,info.ServerIP);
           ChatDialog *share = new ChatDialog(pinfo,info);
           share->fileName = info.filePath;
           share->startClient();

      }



      /*  while(udpsocket->hasPendingDatagrams())
        {
            qDebug() << "cmcmcmcm";
            qint16 type;
            QString IP;
            FileInformation value;
            qDebug() << filelist.size();
            QList<FileInformation>::iterator File  = filelist.begin();
            udpcli->receiveMessage(uudpsocket,type,IP,value);

            if(type == 4)//作为客户端接收到别人的信息，将文件信息更新到自己的tablewidget
            {
                qDebug() << type;
                if(IP != "222.24.74.30")
                 {
                  //  filelist.push_back(value);
                    qDebug()<<value.fileName;
                    qDebug()<<value.fileSize;
                    qDebug()<<value.fileType;
                 }

            }
            else if(type == 5)//作为服务器收到别人的请求下载信息，然后遍历自己的容器是否存在这个文件，然后把文件发给他
               {
                qDebug() << "ok";
                if(!filelist.isEmpty())
                {
                    while(value.fileName == (*File).fileName && File != filelist.end())
                    {
                        ++File;
                        qDebug() << "okk";
                         //找到了，发射一个信号给发送文件，开始发送文件
                        qDebug() << value.fileload;

                        file = new ChatDialog();
                        file.setfileload(value.fileload);
                        file.setip(value.ip);
                    }
                    qDebug() << "NO";
                }
               }

        }*/


}

