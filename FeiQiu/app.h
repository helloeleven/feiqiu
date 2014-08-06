#ifndef APP_H
#define APP_H
#include <QSettings>
#include <QObject>
#include <QString>
#include <QPushButton>
#include <QProcess>
#include <QFileInfo>
#include <QFileIconProvider>
#include <QIcon>
#include <QSize>
#include <QDesktopServices>
#include <QUrl>
#include <QMouseEvent>
class APP : public QObject
{
    Q_OBJECT
public:
    explicit APP(QObject *parent = 0);
    APP(QString fileName);
    QPushButton *button;
    QProcess* pro;
    QString FileName;
    QString flags;
    QString webAddress;
    QString change_name(QString tem_file_name);
    QPushButton *delAppBt;
    QWidget *btWidget;
    void delAppBt_show();
    void delAppBt_hide();
signals:
    void appdel(QObject * ap);
public slots:
    void buttonPresssed();
   void  emitdelapp();

};

#endif // APP_H
