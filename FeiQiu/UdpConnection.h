#ifndef UDPCONNECTION_H
#define UDPCONNECTION_H

#include <QHostAddress>
#include <QUdpSocket>
#include"SystemInfo.h"
#include"PersonLoginInfo.h"
#include"PersonInformation.h"
#include "FileInformation.h"


class UdpConnection
{
public:
    UdpConnection();
    void sendMessage(int type,QHostAddress IP,QString value,int port = 2000);
    void sendMessage(int type,PersonLoginInfo value,QHostAddress IP = QHostAddress::Broadcast , int port = 6666);
     void sendMessage(int type,FileInformation value,QHostAddress IP = QHostAddress::Broadcast , int port = 6666);

    void receiveMessage(QUdpSocket *us,qint16& type,QString& IP,QString &value);

    QUdpSocket* udpSend;
};


#endif // UDPCONNECTION_H
