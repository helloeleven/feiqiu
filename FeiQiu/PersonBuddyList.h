#ifndef PERSONBUDDYLIST_H
#define PERSONBUDDYLIST_H

#include <QListWidget>
#include <QMenu>
#include <QMouseEvent>
#include <QLineEdit>
#include"PersonLoginInfo.h"

class PersonBuddyList : public QListWidget
{
    Q_OBJECT
public:
    explicit PersonBuddyList(QListWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);//鼠标点击事件
    void contextMenuEvent(QContextMenuEvent*);//菜单事件，为了显示菜单
    void initMenu();//初始化菜单
    QMenu *blankMenu;//点击空白上的菜单
    QMenu *groupMenu;//点击组上的菜单
    QMenu *personMenu;//点击人上的菜单
    QMap<QListWidgetItem*,QListWidgetItem*> groupMap;   // 组容器 - key:项 value:组
    QMap<QListWidgetItem*,bool> isHideMap;//用来判断该组是否隐藏了
    QLineEdit *groupNameEdit;//组的名字，重命名的时候需要用到
    QListWidgetItem *currentItem;//当前的项
public:
    void AddBuddy(PersonLoginInfo info);   //添加好友
    void AddGroup(bool);   //添加组
public slots:
    void slotgroupmessage();
    void slotpersonmessage();
    void mouseDoubleClickEvent(QMouseEvent *event);

    void slotDelGroup();   //删除组

    void slotDelBuddy();   //删除好友
    void slotRename();     //重命名组
    void slotRenameEditFshed();//命名完成

};




#endif // PERSONBUDDYLIST_H
