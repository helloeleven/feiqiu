#ifndef PERSONINFORMATION_H
#define PERSONINFORMATION_H

#include <QString>
#include <QDataStream>
#include <QtNetwork>

class PersonInformation
{
    friend QDataStream& operator<<(QDataStream& out,PersonInformation& info)
    {
        out<<info.userName;
        out<<info.userSign;
        out<<info.userHeadPath;
        out<<info.userCellphone;
        out<<info.userTelephone;
        out<<info.userHomephone;
        out<<info.userEmail;
        out<<info.userAddress;
        out<<info.userOtherInfo;

        return out;
    }

    friend QDataStream& operator>>(QDataStream& in,PersonInformation& info)
    {
        in>>info.userName;
        in>>info.userSign;
        in>>info.userHeadPath;
        in>>info.userCellphone;
        in>>info.userTelephone;
        in>>info.userHomephone;
        in>>info.userEmail;
        in>>info.userAddress;
        in>>info.userOtherInfo;

        return in;
    }


public:
    PersonInformation()
    {
        userName =
        userSign =
        userCellphone =
        userTelephone =
        userHomephone =
        userEmail =
        userAddress =
        userOtherInfo = "";
        userHeadPath = "img/head/bmp166.bmp";   //默认用户头像

    }

    QString userName;
    QString userSign;
    QString userHeadPath;
    QString userCellphone;
    QString userTelephone;
    QString userHomephone;
    QString userEmail;
    QString userAddress;
    QString userOtherInfo;


public:
    bool operator==(PersonInformation& info)
    {

        return (userName       == info.userName      &&
                userSign       == info.userSign      &&
                userHeadPath   == info.userHeadPath  &&
                userCellphone  == info.userCellphone &&
                userTelephone  == info.userTelephone &&
                userHomephone  == info.userHomephone &&
                userEmail      == info.userEmail     &&
                userAddress    == info.userAddress   &&
                userOtherInfo  == info.userOtherInfo );
    }

    bool operator!=(PersonInformation& info)
    {

        return !((*this)==info);

    }


};







#endif // PERSONINFORMATION_H
