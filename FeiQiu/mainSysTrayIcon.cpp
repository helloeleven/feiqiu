#include "mainwindow.h"
#include "ui_mainwindow.h"

//--------------------系统托盘显示---------------------------------------------------
void MainWindow::SystemTrayShow()
{

    trayicon = new QSystemTrayIcon(this);
     //创建QIcon对象，参数是图标资源，值为项目的资源文件中图标的地址
     QIcon icon(":/img/tuopan.jpg");
      createActions();
      trayiconMenu = new QMenu(this);
       //为托盘菜单添加菜单项
      trayiconMenu->addAction(minimizeAction);
      //trayiconMenu->addAction(maximizeAction);
      trayiconMenu->addAction(restoreAction);

      //为托盘菜单添加分隔符
      trayiconMenu->addSeparator();

      trayiconMenu->addAction(quitAction);

      //将创建的QIcon对象作为系统托盘图标
       trayicon->setIcon(icon);

       //显示托盘图标
       trayicon->show();

       //设置系统托盘提示
      // trayicon->setToolTip(tr("托盘测试"));

       //将创建菜单作为系统托盘菜单
       trayicon->setContextMenu(trayiconMenu);

       //在系统托盘显示气泡消息提示  托盘测试
       trayicon->showMessage(tr("hello"), tr("已上线"), QSystemTrayIcon::Information, 3000);

       //为系统托盘绑定双击信号的槽 即图标激活时
       connect(trayicon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason)));
       connect(ui->Window_MinSize,SIGNAL(clicked()),this,SLOT(on_action_quit_triggered()));
}

void MainWindow::onSystemTrayIconClicked(QSystemTrayIcon::ActivationReason reason)
{
  switch(reason)
  {
  //单击
  //case QSystemTrayIcon::Trigger:

  //双击
  case QSystemTrayIcon::DoubleClick:

      //恢复窗口显示
      this->setWindowState(Qt::WindowActive);
      this->show();
      break;

  default:
      break;
  }
}

void MainWindow::closeEvent(QCloseEvent *event)
{
  if(trayicon->isVisible())
  {
      hide();
      event->ignore();
  }
}


void MainWindow::on_action_quit_triggered()
{
  this->hide();
  this->close();
  trayicon->showMessage(tr("我在这里"), tr("点击我还原~~"), QSystemTrayIcon::Information, 3000);
}

void MainWindow::createActions()
{
     minimizeAction = new QAction(tr("最小化 (&I)"), this);
     connect(minimizeAction, SIGNAL(triggered()), this, SLOT(hide()));
    // maximizeAction = new QAction(tr("最大化 (&X)"), this);
     //connect(maximizeAction, SIGNAL(triggered()), this, SLOT(showMaximized()));
     restoreAction = new QAction(tr("还原 (&R)"), this);
     connect(restoreAction, SIGNAL(triggered()), this, SLOT(showNormal()));
     quitAction = new QAction(tr("退出 (&Q)"), this);
     connect(quitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
}


//----------------托盘来消息时闪动----------------
void MainWindow::SysTrayIconTwinkle()
{
    TrayIconTimers = new QTimer(this);
    TrayIconTimers->setSingleShot(false);//无限循环
    TrayIconTimers->setInterval(500);//闪动时间间隔
    TrayIconTimers->start();
    connect(TrayIconTimers,SIGNAL(timeout()),this,SLOT(changeIco()));
    connect(trayicon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)),
                         this, SLOT(Maction(QSystemTrayIcon::ActivationReason)));
}





void MainWindow::changeIco()
{
    static int m = 0;
    m++;
    /*if(m==20)
    {
        times->stop();
    }*/
    if(m%2==0)
    {
        trayicon->setIcon( QIcon(":/img/xinfeng.jpg") );
    }
    else
    {
        trayicon->setIcon( QIcon(":/img/tuopan.jpg" ));
     }
}

void MainWindow::Maction(QSystemTrayIcon::ActivationReason wch)
{
    ChatDialog *chat;
    UdpConnection *noticeMsg;
    switch(wch)
    {
        case QSystemTrayIcon::Trigger:
        TrayIconTimers->stop();
        trayicon->setIcon( QIcon(":/img/tuopan.jpg") );

        chat = new ChatDialog(&rfriendInfo);
        chat->show();
        chat->DisplayMessage(1,rfriendInfo.firstMsg);
        noticeMsg = new UdpConnection();
        noticeMsg->sendMessage(3,QHostAddress(rfriendInfo.logHostIp),"OK",7777);
        qDebug()<<"Maction1111111111111111111111"<<rfriendInfo.logHostIp;
        break;//当用户单击时 我们让图标停止闪烁

    default:;
    }

}
