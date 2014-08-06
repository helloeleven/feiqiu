#include "chatdialog.h"
#include "ui_chatdialog.h"
#include<QMessageBox>
#include <QFile>
#include <QFileDialog>


//----------------保存聊天记录------------


bool ChatDialog::saveFile(QString &fileName,PersonLoginInfo *pb)//保存文件
{
    if(ui->ShowMessage->document()->isEmpty())
    {
      return true;
    }
    this->pb = pb;
    QString hostname = pb->logHostName;

    QString filename=QString("chat/%1.db").arg(hostname);
    QFile file(filename);
    if(!file.open(QFile::WriteOnly|QFile::Text|QFile::Append))//追加
       {

        QMessageBox::warning(NULL,tr("保存文件"),tr("文件无法保存%1：/n%2").arg(fileName).arg(file.errorString()));
        return false;
        }
    QTextStream out(&file);
    out<<ui->ShowMessage->toPlainText();
    out<<"\n";
    file.flush();//刷新
    file.close();
    return true;
}
 //-------------------打开聊天记录-----------------
void ChatDialog::openChatSave()
{
    connect(ui->openChatButton,SIGNAL(clicked()),this,SLOT(openChat()));

}
void ChatDialog::openChat()

{
    saveFile(fileName,pb);
    Chatlog = new chatLogging(pb);
    Chatlog->show();
}
