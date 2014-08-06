#include "UDP_connection.h"


//---------------------Chat_Connection_Ser--------------------------------
Chat_Connection_Ser::Chat_Connection_Ser(Port port=4040)
{
    Init(port);
}
Chat_Connection_Ser::~Chat_Connection_Ser()
{
    closesocket(sockSer);
    WSACleanup();
}

void Chat_Connection_Ser::Init(Port port)
{
    WORD wVersionRequested;
    WSADATA wsaData;
    int err;

    wVersionRequested = MAKEWORD( 2, 2 );

    err = WSAStartup( wVersionRequested, &wsaData );
    if ( err != 0 ) {
        /* Tell the user that we could not find a usable */
        /* WinSock DLL.                                  */
        return;
    }

    /* Confirm that the WinSock DLL supports 2.2.*/
    /* Note that if the DLL supports versions greater    */
    /* than 2.2 in addition to 2.2, it will still return */
    /* 2.2 in wVersion since that is the version we      */
    /* requested.                                        */

    if ( LOBYTE( wsaData.wVersion ) != 2 ||
        HIBYTE( wsaData.wVersion ) != 2 ) {
            /* Tell the user that we could not find a usable */
            /* WinSock DLL.                                  */
            WSACleanup();
            return;
    }

    //-------------------------------------------------------------


    sockSer = socket(AF_INET,SOCK_DGRAM,0);
    addrSer.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
    addrSer.sin_port = htons(port);
    addrSer.sin_family = AF_INET;

    int len = sizeof(SOCKADDR);
    bind(sockSer,(SOCKADDR*)&addrSer,len);

}

bool Chat_Connection_Ser::Send(char *sendbuf)
{
    int len = sizeof(SOCKADDR);
    if(SOCKET_ERROR == sendto(sockSer,sendbuf,strlen(sendbuf)+1,0,(SOCKADDR*)&addrCli,len) )
    {
        return false;
    }
    return true;
}



bool Chat_Connection_Ser::Recv(char *recvbuf)
{
    int len = sizeof(SOCKADDR);
    if(SOCKET_ERROR == recvfrom(sockSer,recvbuf,256,0,(SOCKADDR*)&addrCli,&len) )
    {
        return false;
    }
    return true;
}

//---------------------Chat_Connection_Cli---------------------------------------------------
Chat_Connection_Cli::~Chat_Connection_Cli()
{
    closesocket(sockCli);
    WSACleanup();
}

Chat_Connection_Cli::Chat_Connection_Cli(char *Ip,Port port=4040)
{
    Init(Ip,port);
}

void Chat_Connection_Cli::Init(char *Ip,Port port)
{
    WORD wVersionRequested;
    WSADATA wsaData;
    int err;

    wVersionRequested = MAKEWORD( 2, 2 );

    err = WSAStartup( wVersionRequested, &wsaData );
    if ( err != 0 ) {
        /* Tell the user that we could not find a usable */
        /* WinSock DLL.                                  */
        return;
    }

    /* Confirm that the WinSock DLL supports 2.2.*/
    /* Note that if the DLL supports versions greater    */
    /* than 2.2 in addition to 2.2, it will still return */
    /* 2.2 in wVersion since that is the version we      */
    /* requested.                                        */

    if ( LOBYTE( wsaData.wVersion ) != 2 ||
        HIBYTE( wsaData.wVersion ) != 2 ) {
            /* Tell the user that we could not find a usable */
            /* WinSock DLL.                                  */
            WSACleanup();
            return;
    }

    //-------------------------------------------------------------

    sockCli = socket(AF_INET,SOCK_DGRAM,0);
    addrSer.sin_family = AF_INET;
    addrSer.sin_port = htons(port);
    addrSer.sin_addr.S_un.S_addr = inet_addr(Ip);
}


bool Chat_Connection_Cli::Send(char* sendbuf)
{
    int len = sizeof(SOCKADDR);
    if(SOCKET_ERROR == sendto(sockCli,sendbuf,strlen(sendbuf)+1,0,(SOCKADDR*)&addrSer,len) )
    {
        return false;
    }
    return true;
}


bool Chat_Connection_Cli::Recv(char* recvbuf)
{
    int len = sizeof(SOCKADDR);
    if(SOCKET_ERROR == recvfrom(sockCli,recvbuf,256,0,(SOCKADDR*)&addrSer,&len) )
    {
        return false;
    }
    return true;
}



