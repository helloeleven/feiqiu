#ifndef CHATDIALOG_H
#define CHATDIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>

#include "PersonBuddyInfo.h"
#include "PersonLoginInfo.h"
#include "UdpConnection.h"
#include "chatlogging.h"
#include "mywidget.h"

#include "SystemInfo.h"

#include <cstdlib>
#include <ctime>
#include <QUdpSocket>


namespace Ui {
class ChatDialog;
}

class ChatDialog : public QDialog
{
    Q_OBJECT

/*
public:
   static ChatDialog* Instance(PersonLoginInfo *pb)
    {
        if(_instance == 0)
        {
            _instance = new ChatDialog(pb);
        }
        return _instance;
    }
private:
    static ChatDialog* _instance;

protected:
    explicit ChatDialog(PersonLoginInfo *pb,QWidget *parent=0);
*/



public:
    ~ChatDialog();
    explicit ChatDialog(PersonLoginInfo *pb,FileInformation info =FileInformation(),QWidget *parent=0);

private:
    Ui::ChatDialog *ui;
    PersonLoginInfo *pb;
    bool	m_MousePressed;
    QPoint	m_MousePos;
    QPoint	m_WindowPos;


private slots:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void minWindows();
    void closeWindows();
    void on_SendMessage_clicked();

//----------------窗口抖动-------------------------
public:
    void shakeStart();
private:
    QDialog *dialog;
    QTimer* M_Timer;
    int Counter;
    QPoint curPos;

    enum{MaxLimitTimes=500};//抖动次数
    enum{MaxLimitSpace=20};//抖动幅度
    enum{ShakeSpeed=1000}; //抖动速度

private slots:
    void S_TimeOut();
    void slotShakeWindow();

//-----------好友聊天------------------------
private slots:
    void receiveMessage();
    void on_sendfile_clicked();

private:
    UdpConnection *udpService;
    UdpConnection *noticeMsg;
    QUdpSocket *receive;
    bool chatMark;
public:
    void DisplayMessage(int,QString);

//----------文件传送--------------------------
private:
    qint64 TotalBytes; //总共需发送的字节数
    QFile *localFile; //待接收文件
public:
    QString fileName; //待接收文件的文件名

//服务器端
private:
    QTcpServer tcpServer; //服务器套接字
    QTcpSocket *tcpServerConnection; //连接后服务器返回的套接字
    qint64 bytesReceived; //已接收字节数
    qint64 fileNameSize; //待接收文件名字节数
    QByteArray inBlock;

public slots:
    void startServer();
    void refuse();
    void acceptConnection();
    void updateServerProgress();


//客户端
private:
    QTcpSocket tcpClient; //客户端套接字
    qint64 bytesWritten; //已发送字节数
    qint64 bytesToWrite; //待发送字节数
    qint64 loadSize; //被初始化为一个4Kb的常量
    QByteArray outBlock; //缓存一次发送的数据

public slots:
    void startClient();
    void startTransfer();
    void updateClientProgress(qint64 numBytes);
    void openFile();

    //----------------保存聊天记录-----------
    public:
        bool saveFile(QString &fileName,PersonLoginInfo *pb);
        void openChatSave();
    private:
        chatLogging *Chatlog;

    private slots:
        void openChat();
        void on_openChatButton_clicked();
        void on_CutPic_clicked();
};

#endif // CHATDIALOG_H
