#ifndef FILEINFORMATION_H
#define FILEINFORMATION_H
#include<QString>

class FileInformation
{

    friend QDataStream& operator <<(QDataStream& out, FileInformation &file);
    friend QDataStream& operator >>(QDataStream& in, FileInformation &file);

public:
    FileInformation(QString);
    FileInformation();
    void getFileInformation();
    QString getfiletime();

    QString fileName;
    qint64  fileSize;  //µ¥Î»KB
    QString fileType;
    QString filePath;
    QString fileTime;
    QString HostIP;
    QString HostName;
    QString ServerIP;
    QString ServerName;


};


#endif // FILEINFORMATION_H
