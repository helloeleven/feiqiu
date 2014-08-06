
//----------app目的在于当添加路径时，能够新建按钮，并且点击按钮实现功能---------

#include "app.h"
#include <QMessageBox>
#include <QDebug>
#define MSPAINT "C:\\Windows\\System32\\MSpaint"

APP::APP(QObject *parent) ://rundll32.exeDllHost.exe
    QObject(parent)
{
}
APP::APP(QString fileName)
{
    FileName = fileName;//传入的文件名
    pro = new QProcess;
    QFileInfo fileinfo(fileName);

     qDebug()<<fileName;
     qDebug()<<"-------";

     if(fileName == "")
     {
          return;
     }
    QFileIconProvider iconProvider;//获取文件图标，类型
    QIcon icon = iconProvider.icon(fileinfo);//得到文件名的图标
    button = new QPushButton;
    button->setIcon(icon);//设置按钮图标为文件图标
    button->setIconSize(QSize(50,50));
    button->setMaximumSize(90,90);
    flags = "app";//初始化flags

    connect(button,SIGNAL(clicked()),this,SLOT(buttonPresssed()));

    //------删除APP小按钮-----
    QIcon ic("img/del.jpg");
    delAppBt=new QPushButton;
    delAppBt->setIcon(ic);
    delAppBt->setIconSize(QSize(20,20));
    delAppBt->setMaximumSize(20,20);
    delAppBt->move(40,0);
    delAppBt->setFlat(true);
    //delAppBt->installEventFilter(this);

    btWidget = new QWidget;
    btWidget->setParent(button);
    btWidget->move(10, 10);
    btWidget->setGeometry(0, 0, 601, 321);

    delAppBt->setParent(btWidget);
    delAppBt->setVisible(false);

    connect(delAppBt,SIGNAL(clicked()),this,SLOT(emitdelapp()));


}

void APP::buttonPresssed()
{

    qDebug() << FileName;
    QFileInfo file_info(FileName);
    QString qs_file_suffix  = file_info.suffix();

    qDebug() << qs_file_suffix;

    qs_file_suffix = "." + qs_file_suffix;

    qDebug() << qs_file_suffix;

    QSettings *settings=new QSettings("HKEY_CLASSES_ROOT\\" +qs_file_suffix,QSettings::NativeFormat);
    QString qs_tem;
    //QDir tem_dir;
    QString qs_sxb;

    bool tem_flag = false;
    if(qs_file_suffix != ".exe")
    {

        if(qs_file_suffix == ".jpg" || qs_file_suffix == ".png" || qs_file_suffix == ".gif" ||qs_file_suffix == ".bmp" || qs_file_suffix == ".ico")
        {
              FileName = change_name(FileName);
              pro->startDetached(MSPAINT, QStringList(FileName));
        }
        else
        {
            foreach(QString str,settings->childKeys())
            {
                 QString value=settings->value(str).toString();
                 qs_tem = value.toLocal8Bit().data();
                 qDebug() << qs_tem;
               // break;

                 if(tem_flag == true)
                 {
                     break;
                 }

                 QSettings *settings1=new QSettings("HKEY_CLASSES_ROOT\\" + qs_tem+"\\shell\\open\\command",QSettings::NativeFormat);
                 foreach(QString str,settings1->childKeys())
                 {
                     QStringList value=settings1->value(str).toString().split("\"");

                     qDebug() << value.count();

                     for( int i = 0; i < value.count(); i++)
                     {
                         qDebug() << value[i];
                     }

                     if(value[0] == "")
                     {
                         qs_tem = value[1];
                     }
                     else
                     {
                         qs_tem = value[0];
                     }

                     if(qs_tem.contains("%Systemroot%"))
                     {
                         qs_tem.replace("%Systemroot%", "C:\\Windows");
                     }

                     value = qs_tem.split(".exe");
                     qs_sxb = value[0] + ".exe";

                     bool ok = pro->startDetached( qs_sxb, QStringList(FileName));

                     qDebug()  << ok;
                     if(ok)
                     {
                          tem_flag = true;
                          break;
                     }
                 }
            }
        }
    }
    else
    {
         pro->startDetached( FileName, QStringList());
    }

   /* if(flags == "app")
    {
        pro->startDetached(FileName,QStringList());//当前程序关闭时，调用的外部程序能够照常运行
                                                  //第一个参数是外部exe路径，当exe路径中含有空格时，就需要用到第二个参数，如果外部应用程序只需要exe这一个就可以打开时，
                                                //第二个参数写成QStringList()就可以了
    }
    else if(flags =="web")
    {
        QDesktopServices::openUrl(QUrl(webAddress));//直接打开外部网页
    }*/
}
QString APP::change_name(QString tem_file_name)
{
    tem_file_name.replace("/", "\\\\");
    return tem_file_name;
}
void APP::emitdelapp()
{
    emit appdel(this);
}
 void APP::delAppBt_show()
 {

    delAppBt->setVisible(true);
 }
 void APP::delAppBt_hide()
 {
    delAppBt->setVisible(false);
 }
