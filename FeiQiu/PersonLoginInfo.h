#ifndef PERSONLOGININFO_H
#define PERSONLOGININFO_H
#include<QString>
#include "PersonInformation.h"
#include "Information_file_save.h"

class PersonLoginInfo
{
    friend QDataStream& operator<<(QDataStream& out,PersonLoginInfo& info)
    {
        out<<info.logHostName;
        out<<info.logHostIp;
        out<<info.firstMsg;
        out<<info.logInfo;
        return out;
    }

    friend QDataStream& operator>>(QDataStream& in,PersonLoginInfo& info)
    {
        in>>info.logHostName;
        in>>info.logHostIp;
        in>>info.firstMsg;
        in>>info.logInfo;
        return in;
    }

public:

     QString logHostName;
     QString logHostIp;
     QString firstMsg;
     PersonInformation logInfo;

    bool Init()
    {
        Information_file_save<PersonInformation> file("dat/info.dat");
        return file.read(logInfo);


    }

    PersonLoginInfo(){}
    PersonLoginInfo( QString logHostName, QString logHostIp,
                     PersonInformation logInfo = PersonInformation() )
    {
        this->logHostIp = logHostIp;
        this->logHostName = logHostName;
        this->firstMsg = "";
        if(!Init())
            this->logInfo = logInfo;
    }

    PersonLoginInfo( const PersonLoginInfo& info)
    {
        logHostIp = info.logHostIp;
        logHostName = info.logHostName;
        firstMsg = info.firstMsg;
        logInfo = info.logInfo;
    }

    //用于用户资料改变时广播信息时的构造
    PersonLoginInfo( PersonInformation logInfo,QString logHostName, QString logHostIp,int x)
    {
        this->logHostIp = logHostIp;
        this->logHostName = logHostName;
        this->logInfo = logInfo;
        firstMsg = "";
    }



};




#endif // PERSONLOGININFO_H
