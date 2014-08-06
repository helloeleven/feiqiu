#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);  //去掉标题栏
    connect(ui->close,SIGNAL(clicked()),this,SLOT(close_window()));
    this->setFixedSize( this->width(),this->height());//设置窗口固定大小


    model = new QStandardItemModel();

    model->setColumnCount(2);
    model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("用户名"));
    model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("IP"));

    ui->listView->setModel(model);
    ui->listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    connect(ui->listView,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(itemclicked(QModelIndex)));
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog :: additem(QString name, QString str)
{
     int n = model->rowCount();
     QString ss = name+"      "+str;
     model->setItem(n,new QStandardItem(ss));
}

void SearchDialog :: updateitem(QString name, QString str)
{
    deleteitem();
    additem(name,str);
}

void SearchDialog :: deleteitem()
{
    int n = model->rowCount();
    for(int i = 0; i < n; i++)
    {
    model->removeRow(i);
    qDebug("已删除....");
    }
}

void SearchDialog :: itemclicked(QModelIndex index)
{
    QStandardItem *item = model->itemFromIndex(index);
    QString ss = item->text();
    qDebug()<<ss;
    QStringList list;
    list = ss.split("      ");
    PersonLoginInfo *pLog = new PersonLoginInfo(list.at(0),list.at(1));
    ChatDialog *chat = new ChatDialog(pLog);
    chat->show();
    this->close();
}

void SearchDialog :: close_window()
{
    this->close();
}


//------------------------鼠标拖动---------------------------------
void SearchDialog::mousePressEvent(QMouseEvent *lpEvent)
{

    if (lpEvent->button() == Qt::LeftButton)
    {
        m_WindowPos = this->pos();
        m_MousePos = lpEvent->globalPos();
        this->m_MousePressed = true;
    }
}

void SearchDialog::mouseReleaseEvent(QMouseEvent *lpEvent)
{

    if (lpEvent->button() == Qt::LeftButton)
    {
        this->m_MousePressed = false;
    }
}

void SearchDialog::mouseMoveEvent(QMouseEvent *lpEvent)
{

    if (m_MousePressed)
    {
        this->move(m_WindowPos + (lpEvent->globalPos() - m_MousePos));
    }

}
