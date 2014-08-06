
#include "PersonBuddyList.h"
#include "PersonBuddyInfo.h"
#include "PersonLoginInfo.h"
#include "chatdialog.h"

PersonBuddyList::PersonBuddyList(QListWidget *parent) :
    QListWidget(parent)
{
    qDebug(__func__);
    setFocusPolicy(Qt::NoFocus);       // 去除item选中时的虚线边框
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);//水平滚动条关闭
    initMenu();
    AddGroup(true);
}


void PersonBuddyList::initMenu()
{
    qDebug(__func__);
    //初始化：
    blankMenu = new QMenu();
    groupMenu = new QMenu();
    personMenu = new QMenu();
    groupNameEdit=new QLineEdit();
    QAction *addGroup = new QAction(tr("添加分组"), this);
    QAction *delGroup = new QAction(tr("删除该组"), this);
    QAction *rename = new QAction(tr("重命名"), this);
    //QAction *addBuddy = new QAction(tr("添加好友"),this);
    QAction *delBuddy = new QAction(tr("删除好友"), this);
    //QAction *groupmessage = new QAction("",this);
    //QAction *personmessage = new QAction("",this);
    //设置：
    groupNameEdit->setParent(this);  //设置父类
    groupNameEdit->hide(); //设置初始时隐藏
    groupNameEdit->setPlaceholderText(tr("未命名"));//设置初始时的内容
    //布局：
    //blankMenu->addAction(addGroup);
    groupMenu->addAction(delGroup);
    groupMenu->addAction(rename);
  //  groupMenu->addAction(addBuddy);
    personMenu->addAction(delBuddy);
    //信息槽：
    connect(groupNameEdit,SIGNAL(editingFinished()),this,SLOT(slotRenameEditFshed()));
    //connect(addGroup,SIGNAL(triggered()),this,SLOT(slotAddGroup()));
    connect(delGroup,SIGNAL(triggered()),this,SLOT(slotDelGroup()));
    connect(rename,SIGNAL(triggered()),this,SLOT(slotRename()));
   // connect(addBuddy,SIGNAL(triggered()),this,SLOT(slotAddBuddy()));
    connect(delBuddy,SIGNAL(triggered()),this,SLOT(slotDelBuddy()));
   // connect(,SIGNAL(doubleClicked()),this,SLOT(mouseDoubleClickEvent()));
    //connect(,SIGNAL(doubleClicked()),this,SLOT(mouseDoubleClickEvent()));
}
//鼠标点击事件
void PersonBuddyList::mousePressEvent(QMouseEvent *event)
{
    QListWidget::mousePressEvent(event); // 如果不调用基类mousePressEvent，item被select会半天不响应,调用父类，让QSS起效，因为QSS基于父类QListWidget，子类就是子窗口，就是最上层窗口，是覆盖在父窗口上的，所以先于父窗口捕获消息
    //防止一种特殊情况：给新item命名、点击其他item或空白处时，指向新item的currentItem被赋予其他item
    if(groupNameEdit->isVisible() && !(groupNameEdit->rect().contains(event->pos())))
    {
        if(groupNameEdit->text()!=NULL)
            currentItem->setText(groupNameEdit->text());
        groupNameEdit->setText("");
        groupNameEdit->hide();
    }
    currentItem = this->itemAt(mapFromGlobal(QCursor::pos()));//鼠标位置的Item，不管右键左键都获取
    if(event->button()==Qt::LeftButton && currentItem!=NULL && currentItem==groupMap.value(currentItem))//如果点击的左键并且是点击的是组
    {
        if(isHideMap.value(currentItem))                                  //如果先前是隐藏，则显示
        {
            foreach(QListWidgetItem* subItem, groupMap.keys(currentItem))//遍历组的对应的项（包括自身和好友）
                if(subItem!=currentItem)                                 //如果是组的话不进行处理
                {
                    subItem->setHidden(false);                            //好友全部显示
                }
            isHideMap.insert(currentItem,false);                          //设置该组为显示状态
            currentItem->setIcon(QIcon("img/list_show.bmp"));//向下的箭头
        }
        else                                                             //否则，先前是显示，则隐藏
        {
            foreach(QListWidgetItem* subItem, groupMap.keys(currentItem))//遍历组的对应的项（包括自身和好友）
                if(subItem!=currentItem)                                 //如果是组的话不进行处理
                {
                    subItem->setHidden(true);                            //好友全部隐藏
                }
             isHideMap.insert(currentItem,true);                          //设置该组为隐藏状态
             currentItem->setIcon(QIcon("img/list_close.bmp"));//向上的箭头
        }
    }
    else if(event->buttons()==Qt::RightButton && currentItem!=NULL && currentItem==groupMap.value(currentItem))
    {
       // QMessageBox::Information(NULL,"ZK","zucaidan",NULL);
    }
}
//菜单事件，为了显示菜单，点击鼠标右键响应，鼠标点击事件mousePressEvent优先于contextMenuEvent
void PersonBuddyList::contextMenuEvent(QContextMenuEvent *event)
{
    QListWidget::contextMenuEvent(event);           //调用基类事件
    if(currentItem==NULL)                           //如果点击到的是空白处
    {
        blankMenu->exec(QCursor::pos());
        return;
    }
    if(currentItem==groupMap.value(currentItem))    // 如果点击到的是组
        groupMenu->exec(QCursor::pos());
    else                                            //否则点击到的是好友
        personMenu->exec(QCursor::pos());
}
//添加组
void PersonBuddyList::AddGroup(bool flag)
{
    QListWidgetItem *newItem=new QListWidgetItem(QIcon("img/list_close"),tr("我的好友"));    //创建一个Item
    newItem->setSizeHint(QSize(this->width(),25));//设置宽度、高度
    this->addItem(newItem);         //加到QListWidget中
    groupMap.insert(newItem,newItem);//加到容器groupMap里，key和value都为组

     isHideMap.insert(newItem,flag);  //设置该组隐藏状态


    //groupNameEdit->raise();
    //groupNameEdit->setText(tr("未命名")); //设置默认内容
    //groupNameEdit->selectAll();        //设置全选
    //groupNameEdit->setGeometry(this->visualItemRect(newItem).left()+15,this->visualItemRect(newItem).top()+1,this->visualItemRect(newItem).width(),this->visualItemRect(newItem).height()-2);//出现的位置
    //groupNameEdit->show();              //显示
    //groupNameEdit->setFocus();          //获取焦点
    currentItem = newItem;     // 因为要给group命名，所以当前的currentItem设为该group
}
//删除组
void PersonBuddyList::slotDelGroup()
{
    foreach(QListWidgetItem* item, groupMap.keys(currentItem))  //遍历该组的所有好友和自身的组
    {
        groupMap.remove(item);   //移除
        delete item;   //删除
    }
    isHideMap.remove(currentItem); //移除
}
//重命名
void PersonBuddyList::slotRename()
{
    groupNameEdit->raise();
    groupNameEdit->setGeometry(this->visualItemRect(currentItem).left()+15,this->visualItemRect(currentItem).top()+1,this->visualItemRect(currentItem).width(),this->visualItemRect(currentItem).height()-2);//出现的位置
    groupNameEdit->setText(currentItem->text());   //获取该组名内容
    groupNameEdit->show();                        //显示
    groupNameEdit->selectAll();                   //全选
    groupNameEdit->setFocus();                        //获取焦点
}
//添加好友
void PersonBuddyList::AddBuddy(PersonLoginInfo info)
{
    PersonBuddyInfo *buddy=new PersonBuddyInfo();   //创建一个自己定义的信息类
    //buddy->headPath="img/head.bmp";//设置头像路径
    buddy->logInfo = info;
    buddy->headPath=info.logInfo.userHeadPath;
    QString name = info.logInfo.userName;
    buddy->name->setText(name == "" ? info.logHostName : name);                  //设置用户名
    buddy->sign->setText(info.logInfo.userSign+"("+info.logHostIp+")");



    QList<QListWidgetItem*> tem = groupMap.keys(currentItem);//当前组对应的项（包括组本身和好友）复制给tem
    //关键代码
    QListWidgetItem *newItem = new QListWidgetItem();       //创建一个newItem
    this->insertItem(row(currentItem)+tem.count(),newItem); //将该newItem插入到后面
    this->setItemWidget(newItem, buddy); //将buddy赋给该newItem
    groupMap.insert(newItem,currentItem);   //加进容器，key为好友，value为组
    if(isHideMap.value(currentItem))          //如果该组是隐藏，则加进去的好友设置为隐藏
        newItem->setHidden(true);
    else                                      //否则，该好友设置为显示
        newItem->setHidden(false);
}
//删除好友
void PersonBuddyList::slotDelBuddy()
{

    groupMap.remove(currentItem);  //移除该好友
    delete currentItem;     //删除
}
//重命名完成
void PersonBuddyList::slotRenameEditFshed()
{
    if(groupNameEdit->text()!=NULL)      //如果重命名编辑框不为空
        currentItem->setText(groupNameEdit->text());  //更新组名
    groupNameEdit->setText("");
    groupNameEdit->hide();  //隐藏重命名编辑框


}


void PersonBuddyList::slotgroupmessage()
{}
void PersonBuddyList::slotpersonmessage()
{}

void PersonBuddyList::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug(__func__);
    currentItem = this->itemAt(mapFromGlobal(QCursor::pos()));
    QString qs;
    if(event->buttons()==Qt::LeftButton && currentItem!=groupMap.value(currentItem))
    {
         QWidget *pw = itemWidget(currentItem);
         PersonBuddyInfo *pb=(PersonBuddyInfo*)(pw);
         PersonLoginInfo *pLog = new PersonLoginInfo(pb->logInfo);

          ChatDialog *chat = new ChatDialog(pLog);
          chat->show();
         //QMessageBox::information(NULL,"zk",qs,NULL);//左键双击组
        // currentItem->data(1);
        // qDebug()<<pb->sign->text();
     }

}
