#include"FileInformation.h"
#include"QFileInfo"
#include<QStringList>
#include<QDateTime>
#include"SystemInfo.h"

FileInformation::FileInformation(QString fileName)
{
    this->fileName = fileName;
    this->filePath = fileName;
    HostIP = SystemInformation().getHostIP();
    HostName = SystemInformation().getHostName();
    getFileInformation();
}


FileInformation::FileInformation()
{
    fileName =
    fileType =
    fileTime =
    ServerIP =
    ServerName =
    filePath = "";
    fileSize = 0;
    HostIP = SystemInformation().getHostIP();
    HostName = SystemInformation().getHostName();
}

void FileInformation::getFileInformation()
{
    QFileInfo info(fileName);

    fileSize=info.size();
    QStringList list = fileName.split(".");
    fileType = list[1];
    fileName = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
    fileTime = getfiletime();
}

QString FileInformation::getfiletime()
{
    QString time;
    QDateTime dateTime = QDateTime::currentDateTime();
    int y=dateTime.date().year();
    int m=dateTime.date().month();
    int d=dateTime.date().day();
    QString strTime=dateTime.time().toString();
    return (strTime+"   "+QString::number(y)+"/"+QString::number(m)+"/"+QString::number(d));
}




QDataStream& operator <<(QDataStream& out, FileInformation &file)
{
    out<<file.fileName;
    out<<file.fileSize;
    out<<file.fileType;
    out<<file.fileTime;
    out<<file.filePath;
    out<<file.HostIP;
    out<<file.HostName;
    out<<file.ServerIP;
    out<<file.ServerName;
    return out;
}

QDataStream& operator >>(QDataStream& in, FileInformation &file)
{
    in>>file.fileName;
    in>>file.fileSize;
    in>>file.fileType;
    in>>file.fileTime;
    in>>file.filePath;
    in>>file.HostIP;
    in>>file.HostName;
    in>>file.ServerIP;
    in>>file.ServerName;
    return in;
}
