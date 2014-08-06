#include"SystemInfo.h"

SystemInformation::SystemInformation()
{
    QHostInfo *hostinfo = new QHostInfo;
    HostName = hostinfo->localHostName();

    QHostInfo localhost = QHostInfo :: fromName(HostName);
    QHostAddress address = localhost.addresses().at(0);
    HostIP = address.toString();
}

QString SystemInformation::getHostName()
{
 return HostName;
}

QString SystemInformation::getHostIP()
{
  return HostIP;
}

