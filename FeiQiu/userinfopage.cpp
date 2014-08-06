#include "userinfopage.h"
#include "ui_userinfopage.h"
#include <QtDebug>

UserInfoPage::UserInfoPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInfoPage)
{
    ui->setupUi(this);
    //this->setWindowOpacity(0.9);//设置窗口透明
    this->setWindowFlags(Qt::FramelessWindowHint);  //去掉标题栏
    this->setFixedSize( this->width(),this->height());//设置窗口固定大小
    add_pic();
    InformationInit();
    //ui->Window_MinSize->setToolTip(tr("最小化"));
    //ui->Window_close->setToolTip(tr("关闭"));
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(ui->SaveInfo,SIGNAL(clicked()),this,SLOT(on_SaveInfo_clicked()));

}

UserInfoPage::~UserInfoPage()
{
    delete ui;
}


void UserInfoPage::mousePressEvent(QMouseEvent *lpEvent)
{

    if (lpEvent->button() == Qt::LeftButton)
    {
        m_WindowPos = this->pos();
        m_MousePos = lpEvent->globalPos();
        this->m_MousePressed = true;
    }
}

void UserInfoPage::mouseReleaseEvent(QMouseEvent *lpEvent)
{

    if (lpEvent->button() == Qt::LeftButton)
    {
        this->m_MousePressed = false;
    }
}

void UserInfoPage::mouseMoveEvent(QMouseEvent *lpEvent)
{
    if (m_MousePressed)
    {
        this->move(m_WindowPos + (lpEvent->globalPos() - m_MousePos));
    }
}

void UserInfoPage::on_Cancel_clicked()
{
    this->close();
}

void UserInfoPage::on_SaveInfo_clicked()
{
     qDebug(__func__);

     PersonInformation info;
     info.userName = ui->userName->text();
     info.userAddress = ui->userAddress->text();
     info.userCellphone = ui->userCellphone->text();
     info.userEmail = ui->userEmail->text();
     info.userHeadPath = tr("img/head/bmp%1.bmp").arg(ui->headpic->currentIndex()+166);
     qDebug()<<info.userHeadPath;

     info.userHomephone = ui->userHomephone->text();
     info.userOtherInfo = ui->userOtherInfo->text();
     info.userSign = ui->userSign->toPlainText();
     info.userTelephone = ui->userTelephone->text();

     Information_file_save<PersonInformation> fileSave("dat/info.dat",info);

     PersonInformation pInfo;
     bool flag = fileSave.read(pInfo);
     if( (flag && pInfo != info) || (!flag))
     {
         fileSave.write();
         SystemInformation sysInfo;
         PersonLoginInfo plogInfo(info,sysInfo.getHostName(),sysInfo.getHostIP(),0);
         qDebug("+++++++++++++++++++++++++++++++++++++++");
         udpsocket.sendMessage(3,plogInfo);
     }

     this->close();
}

void UserInfoPage::InformationInit()
{

    qDebug(__func__);
    Information_file_save<PersonInformation> file("dat/info.dat");
    PersonInformation info;
    if(!file.read(info))
       return;


    QString head = QString(info.userHeadPath);
    QString fileName = head.right(head.size() - head.lastIndexOf('/') - 1);
    QStringList list = fileName.split(".");
    int index = (list[0].right(3)).toInt()-166;

    ui->headpic->setCurrentIndex(index);
    ui->userName->setText(info.userName);
    ui->userAddress->setText(info.userAddress);
    ui->userCellphone->setText(info.userCellphone);
    ui->userEmail->setText(info.userEmail);
    ui->userHomephone->setText(info.userHomephone);
    ui->userOtherInfo->setText(info.userOtherInfo);
    ui->userSign->setText(info.userSign);
    ui->userTelephone->setText(info.userTelephone);
}

//-------------------添加用户头像到下拉框中-------------------------------------------------
void UserInfoPage :: add_pic()
{
        QDir dir("img/head");
        if(!dir.isReadable())
        {
            QMessageBox::critical(0,QString::fromUtf8("wrong"),QString::fromUtf8("the path is wrong"));
        }

        int index=0;
        HeadIconList=dir.entryList(QDir::Files);
        QString now_head_icon;
        for(int i =0;i<HeadIconList.count();i++)
        {
            QString fileName=dir.filePath(HeadIconList.at(i));
            if(fileName==now_head_icon)
            {
                index=i;
            }
            ui->headpic->addItem(QIcon(fileName),NULL);
        }
        ui->headpic->setCurrentIndex(index);

}

