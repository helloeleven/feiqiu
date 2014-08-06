#include "new_msg.h"
#include <QVBoxLayout>
#include <QLabel>
#include <QPainter>
#include <QBitmap>
#include <QDesktopWidget>
#include <QApplication>
#include <QTimer>
#include <QDesktopServices>
#include <QUrl>
#include <QDebug>
new_msg::new_msg(QWidget *parent) :
    QWidget(parent)
{
        setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);

        titleW=new title_tips;
        connect(titleW,SIGNAL(myClose()),this,SLOT(close()));

        content=new QLabel;
        content->setWordWrap(true);
        content->setAlignment(Qt::AlignTop);
        content->setFixedSize(300,100);

        QVBoxLayout*mainLayout=new QVBoxLayout;
        mainLayout->setMargin(0);
        mainLayout->addWidget(titleW);
        mainLayout->addWidget(content);
        content->setMargin(5);
        //mainLayout->addWidget(cloe_button,0,Qt::AlignRight);
        setLayout(mainLayout);

        setFixedSize(sizeHint().width(),sizeHint().height());

        timerShow=new QTimer(this);
        connect(timerShow,SIGNAL(timeout()),this,SLOT(myMove()));
        timerStay=new QTimer(this);
        connect(timerStay,SIGNAL(timeout()),this,SLOT(myStay()));
        timerClose=new QTimer(this);
        connect(timerClose,SIGNAL(timeout()),this,SLOT(myClose()));
}
new_msg::~new_msg(){}

void new_msg::setMsg(QString title, QString content)
{
    titleW->setTitleText("  "+title+tr("上线啦！"));
    this->content->setText("   "+tr("用户IP：")+content);
    showAsQQ();
}

void new_msg::paintEvent(QPaintEvent *)
{
    QBitmap bitmap(this->size());
    bitmap.fill(Qt::white);
    QPainter painter(this);
    painter.setBrush(QBrush(QColor(250,240,230)));
    painter.setPen(QPen(QBrush(QColor(255,222,173)),4));
    painter.drawRoundedRect(bitmap.rect(),5,5);
    setMask(bitmap);
}
void new_msg::showAsQQ()
{
    timeCount=0;
    tran=1.0;
    setWindowOpacity(1);
    QDesktopWidget *deskTop=QApplication::desktop();
    deskRect=deskTop->availableGeometry();

    normalPoint.setX(deskRect.width()-rect().width());
    normalPoint.setY(deskRect.height()-rect().height());
    move(normalPoint.x(),768-1);
    qDebug()<<"Head is Show。。。。。。。。。。。。。。。。。。。"<<endl;
    this->show();
    timerShow->start(5);
}
//平滑显示出来
void new_msg::myMove()
{
    static int beginY=QApplication::desktop()->height();
    beginY--;
    move(normalPoint.x(),beginY);
    if(beginY<=normalPoint.y())
    {
        timerShow->stop();
        timerStay->start(1000);
    }
}
//停留显示
void new_msg::myStay()
{

    timeCount++;
    if(timeCount>=9)
    {
        timerStay->stop();
        timerClose->start(200);
    }
}
//自动关闭时实现淡出效果
void new_msg::myClose()
{

    tran-=0.1;
    if(tran<=0.0)
    {
        timerClose->stop();
        //emit close();
        this->close();
    }
    else
        setWindowOpacity(tran);
}
/*void new_msg::openWeb()
{
    QDesktopServices::openUrl(QUrl(url));
}
*/
