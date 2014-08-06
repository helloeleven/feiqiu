#include "sharefile.h"
#include "ui_sharefile.h"
#include "chatdialog.h"


sharefile::sharefile(vector<FileInformation> *list,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sharefile)
{
    ui->setupUi(this);
    //文件共享信息初始化
    filelist = list;

    QStringList header;
    header<<tr("共享用户")<<tr("文件名")<<tr("文件类型")<<tr("文件大小")<<tr("修改时间")<<tr("文件路径");
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setVisible(true);
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setRowCount(13);
    ui->tableWidget->setWindowTitle(tr("文件共享页"));
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);      //不能更改表格里的内容
    ui->tableWidget->setSelectionBehavior((QAbstractItemView::SelectRows));   //选中一行
    ui->tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);  //设置为可以选中多个目标
    //QTableWidgetItem *item = new QTableWidgetItem();
    //item->setBackground(QColor(255,0,0));
    //item->setTextColor(QColor(255,100,100));
    connect(ui->tableWidget,SIGNAL(itemClicked(QTableWidgetItem*)),this,SLOT(getItem(QTableWidgetItem*)));
}

void sharefile::getItem(QTableWidgetItem* item)
{
    QString fileName;
    qint64  fileSize;  //单位KB
    QString fileType;
    QString time;
    QList<QTableWidgetItem*> temp = ui->tableWidget->selectedItems();

    vector<FileInformation>::iterator it;
    for(it = filelist->begin(); it != filelist->end(); ++it)
    {
        if((*it).fileName == temp[1]->text())
        {
            checkedFile = (*it);
            return;
        }
    }
    checkedFile = FileInformation();
}

sharefile::~sharefile()
{
    delete ui;
}

void sharefile::on_mysharefile_clicked()
{
    mysharefile *temp = new mysharefile(filelist);
    temp->show();
}


void sharefile::on_update_clicked()
{
    qDebug(__func__);
    if(filelist->empty())
    {
        qDebug()<<"ninini";
        return;
    }
    int i=0;

    ui->tableWidget->clear();
    QStringList header;
    header<<tr("共享用户")<<tr("文件名")<<tr("文件类型")<<tr("文件大小")<<tr("修改时间")<<tr("文件路径");
    ui->tableWidget->setHorizontalHeaderLabels(header);
    ui->tableWidget->horizontalHeader()->setVisible(true);
    ui->tableWidget->horizontalHeader()->setHighlightSections(false);

    vector<FileInformation>::iterator it;
    for(it = filelist->begin(); it != filelist->end(); ++it)
    {   qDebug() << (*it).fileName;
        ui->tableWidget->setItem(i,0, new QTableWidgetItem((*it).HostName));
        ui->tableWidget->setItem(i,1, new QTableWidgetItem((*it).fileName));
        ui->tableWidget->setItem(i,2, new QTableWidgetItem((*it).fileType));
        QString size = tr("%1字节").arg(QString::number((*it).fileSize),10);
        ui->tableWidget->setItem(i,3, new QTableWidgetItem(size));
        ui->tableWidget->setItem(i,4, new QTableWidgetItem((*it).getfiletime()));
        ui->tableWidget->setItem(i++,5, new QTableWidgetItem((*it).filePath));

    }
   // ui->tableWidget->resizeColumnsToContents();
}


void sharefile::on_download_clicked()
{
    PersonLoginInfo *info = new PersonLoginInfo(checkedFile.HostName,checkedFile.HostIP);
    ChatDialog *ServerDialog = new ChatDialog(info);
    ServerDialog->fileName = checkedFile.filePath;
    ServerDialog->show();
    //ServerDialog->startServer();

    downSend = new UdpConnection();
    checkedFile.ServerIP = SystemInformation().getHostIP();
    checkedFile.ServerName = SystemInformation().getHostName();
    downSend->sendMessage(5,checkedFile,QHostAddress(checkedFile.HostIP),6666);


}


void sharefile::on_quit_clicked()
{
    this->close();
}
