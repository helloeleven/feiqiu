#include "chatdialog.h"
#include "ui_chatdialog.h"



ChatDialog::ChatDialog(PersonLoginInfo *pb,FileInformation info,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChatDialog)
{

    qDebug(__func__);

//------------------------窗口样式--------------------------------------

    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);  //去掉标题栏
    this->setFixedSize( this->width(),this->height());//设置窗口固定大小
    //设置鼠标移至按钮上的提示信息
    ui->minButton->setToolTip(tr("最小化"));
    ui->closeButton->setToolTip(tr("关闭"));
    connect(ui->minButton,SIGNAL(clicked()),this,SLOT(minWindows()));
    connect(ui->closeButton,SIGNAL(clicked()),this,SLOT(closeWindows()));

    ui->tableWidget->verticalHeader()->setResizeMode(QHeaderView::Stretch);

//----------------------好友信息初始化-----------------------------------

    chatMark = false;
    this->pb = new PersonLoginInfo(*pb);



       // QString time = QDateTime::currentDateTime().toString("hh:mm:ss ap");
      //  ui->ShowMessage->setTextColor(Qt::blue);
        //QString title = pb->logHostIp + "   "+time;
       // ui->ShowMessage->append(title);
       // ui->ShowMessage->setTextColor(QColor(0,0,255));
        //ui->ShowMessage->append(this->pb->firstMsg);




    QString name = pb->logInfo.userName == "" ? pb->logHostName : pb->logInfo.userName;
    ui->nameLable->setText(name);
    ui->userHead->setPixmap(QPixmap(pb->logInfo.userHeadPath));


//----------------------右侧好有信息显示---------------------------------

    ui->hostname->setText(pb->logHostName);
    ui->hostip->setText(pb->logHostIp);


//----------------------窗口抖动初始化-----------------------------------


    M_Timer=new QTimer(this);
    connect(M_Timer,SIGNAL(timeout()),this,SLOT(S_TimeOut()));
    connect(ui->ShakeWindow,SIGNAL(clicked()),this,SLOT(slotShakeWindow()));
    Counter=MaxLimitTimes;



//----------------------socket初始化----------------------------------
    udpService = new UdpConnection;
    receive = new QUdpSocket(this);
    receive->bind(7777,QUdpSocket::ShareAddress|QUdpSocket::ReuseAddressHint);
    connect(receive,SIGNAL(readyRead()),this,SLOT(receiveMessage()));

//-------------------------文件传输-------------------------------

    TotalBytes = 0;
    fileName = "";
    /*----客户端-------*/
    loadSize = 4*1024; // 4Kb
    bytesWritten = 0;
    bytesToWrite = 0;
    connect(&tcpClient, SIGNAL(connected()), this, SLOT(startTransfer()));
    connect(&tcpClient, SIGNAL(bytesWritten(qint64)),this, SLOT(updateClientProgress(qint64)));
    connect(ui->CliSendfile, SIGNAL(clicked()), this, SLOT(startClient()));
    connect(ui->CliOpenfile, SIGNAL(clicked()), this, SLOT(openFile()));

    /*----服务器端-------*/

    bytesReceived = 0;
    fileNameSize = 0;
    connect(&tcpServer, SIGNAL(newConnection()), this, SLOT(acceptConnection()));
    connect(ui->SerConfirm,SIGNAL(clicked()), this, SLOT(startServer()));
    connect(ui->SerRefuse, SIGNAL(clicked()), this, SLOT(refuse()));

    //startServer();   //启动监听



//----------------------打开聊天记录---------------------------------
    openChatSave();

}






ChatDialog::~ChatDialog()
{
    delete ui;
    delete udpService;
    delete receive;
    tcpServerConnection->close();
}



void ChatDialog::mousePressEvent(QMouseEvent *lpEvent)
{
    if (lpEvent->button() == Qt::LeftButton)
    {
        m_WindowPos = this->pos();
        m_MousePos = lpEvent->globalPos();
        this->m_MousePressed = true;
    }
}


void ChatDialog::mouseReleaseEvent(QMouseEvent *lpEvent)
{

    if (lpEvent->button() == Qt::LeftButton)
    {
        this->m_MousePressed = false;
    }
}


void ChatDialog::mouseMoveEvent(QMouseEvent *lpEvent)
{
    if (m_MousePressed)
    {
        this->move(m_WindowPos + (lpEvent->globalPos() - m_MousePos));
    }
}


void ChatDialog::minWindows()
{
    this->showMinimized();
}

void ChatDialog::closeWindows()
{
    this->close();
    saveFile(fileName,pb);
}



//---------------------窗口抖动--------------------------------------
void ChatDialog::shakeStart()
{
    if(Counter<MaxLimitTimes)//正在抖动
        return ;
    Counter=1;
    curPos=this->pos();
    M_Timer->start(ShakeSpeed);
}
void ChatDialog::S_TimeOut()
{
    if(Counter<MaxLimitTimes)//没有抖动结束
    {
        ++Counter;
        switch(Counter%4)
        {
        case 1:
        {
            QPoint TmpPos(curPos.x(),curPos.y()-MaxLimitSpace);
            this->move(TmpPos);
        }
            break;
        case 2:
        {
            QPoint TmpPos(curPos.x()-MaxLimitSpace,curPos.y()-MaxLimitSpace);
            this->move(TmpPos);
        }
            break;
        case 3:
        {
            QPoint TmpPos(curPos.x()-MaxLimitSpace,curPos.y());
            this->move(TmpPos);
        }
            break;
        case 0:
        default:
            this->move(curPos);
            break;
        }

    }
    else
    {
        M_Timer->stop();
    }

}

void ChatDialog::slotShakeWindow()
{

     UdpConnection *noticeMsg = new UdpConnection();
     noticeMsg->sendMessage(4,QHostAddress(pb->logHostIp),"shake",7777);
     QString msg = tr("■您向%1发送一个窗口抖动").arg(pb->logHostIp);
     ui->ShowMessage->append(msg);
}





void ChatDialog::on_CutPic_clicked()
{
    MyWidget *widget = new MyWidget;
    widget->setMouseTracking(true);
    widget->show();
}
