#include <QtGui/QApplication>
#include "mainwindow.h"
#include "new_msg.h"

//MainWindow* MainWindow::_instance = 0;  //³õÊ¼»¯ÊµÀý

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));
    //MainWindow *w = MainWindow::Instance();
    //w->show();
    MainWindow w;
    w.show();

    new_msg tips;
    QObject::connect(&w,SIGNAL(initMsg(QString,QString)),&tips,SLOT(setMsg(QString,QString)));

    QFile styleFile("list.qss");
    styleFile.open(QIODevice::ReadOnly);
    QString setStyleSheet(styleFile.readAll());;
    a.setStyleSheet(setStyleSheet);

    return a.exec();
}
