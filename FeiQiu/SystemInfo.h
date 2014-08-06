#ifndef SYSTEMINFO
#define SYSTEMINFO

#include <QtNetwork>
#include <QString>
#include<string>

using namespace std;

class SystemInformation
{
public:
    SystemInformation();
    QString getHostName();
    QString getHostIP();
private:
    QString HostName;
    QString HostIP;


};





#endif
