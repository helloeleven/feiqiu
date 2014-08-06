#include "chatlogging.h"
#include "ui_chatlogging.h"
#include "chatdialog.h"
#include "PersonLoginInfo.h"
chatLogging::chatLogging(PersonLoginInfo *pb,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chatLogging)
{
    ui->setupUi(this);
   //QString fileName = QFileDialog::getOpenFileName( this,tr("打开聊天记录"),"./",tr("文本(*.txt);;AllFile(*.*)"));
   // QFile f(fileName);
    this->pb = pb;
    QString hostname = pb->logHostName;
    QString fileName=QString("chat/%1.db").arg(hostname);
    QFile f(fileName);
    f.open(QIODevice::ReadOnly);
    QTextStream t(&f);
    ui->textEdit->setText(t.readAll()) ;
    f.close();
     connect(ui->clearButton,SIGNAL(clicked()),this,SLOT(clearChat()));
}

chatLogging::~chatLogging()
{
    delete ui;
}


void chatLogging::on_quitButton_clicked()
{
    this->close();
}
//-----------------------删除聊天记录（包括文件）------------
void chatLogging::clearChat()

{
   QMessageBox msgBox;
   msgBox.setIcon(QMessageBox::Warning);
   msgBox.setWindowTitle(tr("警告！"));
   msgBox.setText(tr("确定要删除聊天记录吗？"));
   QPushButton *Button1 = msgBox.addButton(tr("确定"),QMessageBox::AcceptRole);
   QPushButton *Button2 = msgBox.addButton(tr("取消"),QMessageBox::RejectRole);
   msgBox.exec();
   if (msgBox.clickedButton() == Button1)
   {
       ui->textEdit->clear();
       QString hostname = pb->logHostName;
       QString filename=QString("chat/%1.db").arg(hostname);
       QFile::remove(filename);//刪除文件

   }
   else if (msgBox.clickedButton() == Button2)
   {
       return;
   }
}
