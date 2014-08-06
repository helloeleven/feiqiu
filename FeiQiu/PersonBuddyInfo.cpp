#include "PersonBuddyInfo.h"
#include <QPainter>

PersonBuddyInfo::PersonBuddyInfo(QWidget *parent) :
    QWidget(parent)
{
    initUi();
}
void PersonBuddyInfo::initUi()
{
    //初始化
    head=new QWidget(this);
    name=new QLabel(this);
    sign=new QLabel(this);
    //设置头像大小
    head->setFixedSize(32,32);
    //设置个性签名字体为灰色
    QPalette color;
    color.setColor(QPalette::Text,Qt::gray);
    sign->setPalette(color);
    //布局
    head->move(5,5);
    name->move(45,8);
    sign->move(45,25);
    //装载事件过滤器
    head->installEventFilter(this);
    headPath="img/head";
}
//事件过滤器，主要是为了让图片能够全部填充在head里面
bool PersonBuddyInfo::eventFilter(QObject *obj, QEvent *event)
{
    if(obj == head)
    {
        if(event->type() == QEvent::Paint)
        {
            QPainter painter(head);
            painter.drawPixmap(head->rect(), QPixmap(headPath));
        }
    }
    return QWidget::eventFilter(obj, event);
}


