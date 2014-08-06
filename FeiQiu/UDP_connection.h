#ifndef UDP_CONNECTION_H
#define UDP_CONNECTION_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<winsock2.h>
using namespace std;

#define Port int


class Chat_Connection_Cli
{
public:
    Chat_Connection_Cli(char*,Port);
    ~Chat_Connection_Cli();
    void Init(char*,Port);
    bool Send(char*);
    bool Recv(char*);

private:
    SOCKET sockCli;
    SOCKADDR_IN addrSer;
};


class Chat_Connection_Ser
{
public:
    Chat_Connection_Ser(Port);
    ~Chat_Connection_Ser();
    void Init(Port);
    bool Send(char*);
    bool Recv(char*);

private:
    SOCKET sockSer;
    SOCKADDR_IN addrSer;
    SOCKADDR_IN addrCli;


};



#endif // UDP_CONNECTION_H
