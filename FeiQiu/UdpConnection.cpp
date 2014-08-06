#include"UdpConnection.h"

UdpConnection::UdpConnection()
{
    udpSend = new QUdpSocket();
    //udpReceive = new QUdpSocket();
    //udpReceive->bind(2004,QUdpSocket::ShareAddress);
}

void UdpConnection::sendMessage(int type, QHostAddress IP, QString value, int port)
{
    qDebug(__func__);
    QByteArray data;
    QDataStream out(&data,QIODevice::WriteOnly);
    out<<qint16(type);
    out<<SystemInformation().getHostIP();
    out<<value;
    qint64 v = udpSend->writeDatagram(data.data(),data.size(),IP,port);
    qDebug()<<v;
}


void UdpConnection::sendMessage(int type, PersonLoginInfo value,QHostAddress IP,int port)
{
    qDebug(__func__);
    QByteArray data;
    QDataStream out(&data,QIODevice::WriteOnly);
    FileInformation fileInfo;
    out<<type;
    out<<fileInfo;
    out<<value;


    qint64 v = udpSend->writeDatagram(data.data(),data.size(),IP,port);
    qDebug()<<v;
}

void UdpConnection::sendMessage(int type, FileInformation value,QHostAddress IP,int port)
{
    qDebug(__func__);
    QByteArray data;
    QDataStream out(&data,QIODevice::WriteOnly);

    PersonLoginInfo logInfo;
    out<<type;
    out<<value;
    out<<logInfo;


    qint64 v = udpSend->writeDatagram(data.data(),data.size(),IP,port);
    qDebug()<<v;
}

void UdpConnection::receiveMessage(QUdpSocket *us, qint16 &type, QString &IP, QString &value)
{
    qDebug(__func__);
    QByteArray data;
    data.resize(us->pendingDatagramSize());
    us->readDatagram(data.data(),data.size());
    QDataStream in(&data,QIODevice::ReadOnly);
    in>>type;
    in>>IP;
    in>>value;

    qDebug()<<value;
    qDebug()<<type;
    qDebug()<<IP;
}

