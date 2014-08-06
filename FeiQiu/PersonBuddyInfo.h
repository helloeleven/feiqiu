#ifndef PERSONBUDDYINFO_H
#define PERSONBUDDYINFO_H

#include <QWidget>
#include <QLabel>
#include <QEvent>
#include "PersonLoginInfo.h"

class PersonBuddyInfo : public QWidget
{
    Q_OBJECT
public:
    explicit PersonBuddyInfo(QWidget *parent = 0);
    void initUi();//初始化Ui
    QWidget *head;  //头像
    QLabel *name;  //用户名
    QLabel *sign;  //个性签名
    QString headPath;//头像路径

    PersonLoginInfo logInfo;

    bool eventFilter(QObject *obj, QEvent *event);//事件过滤器

};





#endif // PERSONBUDDYINFO_H
