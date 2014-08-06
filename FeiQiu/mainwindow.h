#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QMouseEvent>
#include <QSystemTrayIcon>
#include <QUdpSocket>
#include "SystemInfo.h"
#include "UDP_connection.h"
#include <vector>
#include <QInputDialog>
#include <QColorDialog>
#include <QFontDialog>

#include "PersonBuddyList.h"
#include "PersonBuddyInfo.h"
#include "PersonLoginInfo.h"
#include "userinfopage.h"
#include "chatdialog.h"
#include "work.h"
#include "searchdialog.h"
#include "sharefile.h"
#include "mysharefile.h"
#include "FileInformation.h"
#include "app.h"
#include "applicationcenter.h"
#include "music.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
/*
public:
    ~MainWindow();
    static MainWindow* Instance()
    {
        if(_instance == 0)
        {
            _instance = new MainWindow;
        }
        return _instance;
    }

protected:
    explicit MainWindow(QWidget *parent = 0);

private:
    static MainWindow* _instance;

*/

public:
    ~MainWindow();
    explicit MainWindow(QWidget *parent = 0);

private:
      //QInputDialog input;
     // QColorDialog color;
     //QFontDialog font;
     // QMessageBox box;


private slots:
    void on_Window_close_clicked();
    void slotUserInfoEdit();

private:
    Ui::MainWindow *ui;
    Chat_Connection_Ser *ser;
    PersonBuddyList *list;
//------------------接受聊天信息--------------------------
private:
    vector<QString> isChat;
private:
    PersonLoginInfo rfriendInfo;
    FileInformation rfileInfo;
//-------------本机信息--------------------------------
private:
    SystemInformation *HostInfo;
    QString HostName;
    QString HostIP;

//-------------鼠标拖动窗口-----------------------------
private:
    bool	m_MousePressed;
    QPoint	m_MousePos;
    QPoint	m_WindowPos;

private:
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

//--------------系统托盘-------------------------------
public:
    void SysTrayIconTwinkle();   //托盘闪烁调用


private:
    QSystemTrayIcon *trayicon;
    QMenu *trayiconMenu;
    QAction *minimizeAction;
    QAction *restoreAction;
    QAction *quitAction;
    QTimer  *TrayIconTimers;

private slots:
    //添加一个槽函数用于响应在托盘图标及托盘菜单上的鼠标点击操作
    void onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason);
    void on_action_quit_triggered();
    //托盘闪烁
    void Maction(QSystemTrayIcon::ActivationReason wch);
    void changeIco();
private:
    void SystemTrayShow();
    void showMessage(char *msg);
    void createActions();
    void createTrayIcon();
    void closeEvent(QCloseEvent *event);
//------------上线广播----------------------------------
public slots:
      void RecvBroadcastInfo();
public:
      void SendBroadcast(QString,qint32);
private:
    QUdpSocket *udpsocket;
    int port;
signals:
    void initMsg(QString title,QString content);


//------------上线用户信息存储容器------------------------------
private:
    vector<PersonLoginInfo> LoginInfo;
//--------------文件共享----------------------------
private:
    vector<FileInformation> filelist;
public:
    void RecvFileInfo(FileInformation,int);

//------------好友列表定时刷新---------------------------------
private:
    QTimer *testTimer;
private slots:
    void ReloadBuddyList();

//------------好友搜索------------------------------------
public:
    class SearchDialog *searchdialog;
    bool Have;
    QString lineedit;
private slots:
    void ready_to_search_2();
    void ready_to_search();
//---------------小功能----------------------------------
    void on_calendar_clicked();
    void on_about_clicked();
    void on_find_clicked();
    void on_setting_clicked();
    void on_refresh_clicked();
    void on_fileShare_clicked();
    void on_Application_clicked();


//-------------应用中心----------
    void on_music_clicked();

private:
        ApplicationCenter *app;



};

#endif // MAINWINDOW_H
