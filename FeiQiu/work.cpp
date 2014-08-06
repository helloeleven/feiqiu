#include "work.h"
#include "ui_work.h"
#include "addwork.h"
#include "ui_addwork.h"
#include "QTextCodec"
work::work(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::work)
{
    qDebug(__func__);
    ui->setupUi(this);
    m_add = new addwork(this);
    connect(m_add, SIGNAL(cancel_signal()), this, SLOT(deal_cancel_come_son()));
    connect(m_add, SIGNAL(save_signal()), this, SLOT(deal_save_come_son()));
    ui->today_date->setText(QDateTime::currentDateTime().toString());
    m_add->setParent(this);
    m_add->load();
    loadColor();
    qDebug() << m_add->RList.size();
    ui->calendarWidget->show();
    connect(m_add,SIGNAL(RecordSaved()),this,SLOT(changeColor()));    
}

work::~work()
{
    delete ui;
}

void work::loadColor()
{
    QDate t;
    QTextCharFormat chooseFormat;
    qDebug("loadColor");


    for(vector<Record>::iterator it=m_add->RList.begin();it!=m_add->RList.end();it++)
    {
        qDebug() << it->Date;
        t = QDate::fromString(it->Date);
        qDebug() << t;
        chooseFormat.setForeground(Qt::green);
        ui->calendarWidget->setDateTextFormat( t,chooseFormat);
    }
}
//公共添加备忘录
void work::on_add_work_clicked()
{
    QDate t = ui->calendarWidget->selectedDate();
    m_add->setDate(t.toString());
    m_add->apperRecord();
    ui->day_work_show->hide();
    ui->label_2->hide();
    ui->add_work->hide();
    ui->show_all_work->hide();
    ui->calendarWidget->hide();
    m_add->show();
    m_add->move(20,30);
}
//双击日期进行备忘录编辑
void work::on_calendarWidget_activated(const QDate &date)
{
    QDate t = ui->calendarWidget->selectedDate();
    m_add->setDate(t.toString());
    m_add->apperRecord();
    ui->day_work_show->hide();
    ui->label_2->hide();
    ui->add_work->hide();
    ui->show_all_work->hide();
    ui->calendarWidget->hide();
    m_add->show();
    m_add->move(20,30);
}

// 添加备忘录后颜色的改变
void work::changeColor()
{
    QDate t = ui->calendarWidget->selectedDate();
    qDebug("dddddddddddddddddddddd");
    qDebug() << t;
    QTextCharFormat chooseFormat;
    chooseFormat.setForeground(Qt::green);
    ui->calendarWidget->setDateTextFormat( t,chooseFormat);
}
//单击日期的动作
void work::on_calendarWidget_clicked(const QDate &date)
{

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
  ui->day_work_show->setText("今日无事");
      for(vector<Record>::iterator it=m_add->RList.begin();it!=m_add->RList.end();it++)
      {
          if(it->Date == date.toString())
          {
              ui->day_work_show->setText(it->record);
              qDebug()<<it->record;
              break;
          }
      }

}
//显示所有备忘录
void work::on_show_all_work_clicked()
{
    ui->textBrowser->clear();
    for(vector<Record>::iterator it=m_add->RList.begin();it!=m_add->RList.end();it++)
    {
        ui->textBrowser->insertPlainText(it->Date+it->record);
        ui->textBrowser->insertPlainText("\n");
        qDebug()<<it->record;

    }
}
void work::deal_cancel_come_son()
{
    ui->day_work_show->show();
    ui->label_2->show();
    ui->add_work->show();
    ui->show_all_work->show();
    ui->calendarWidget->show();
}
void work::deal_save_come_son()
{
    ui->day_work_show->show();
    ui->label_2->show();
    ui->add_work->show();
    ui->show_all_work->show();
    ui->calendarWidget->show();
}
