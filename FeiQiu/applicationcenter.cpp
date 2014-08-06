#include "applicationcenter.h"
#include "ui_applicationcenter.h"
#include <QMessageBox>
#include <QDebug>
#include <QIcon>
#include <QPainter>
#include <QAction>
#include <QTextStream>
#include <QListIterator>
ApplicationCenter::ApplicationCenter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ApplicationCenter)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("应用中心"));
    ui->baiduButton->setToolTip(tr("百度搜索"));
    ui->wzqButton->setToolTip(tr("游戏-五子棋"));
    ui->addButton->setToolTip(tr("添加应用"));
    QIcon ico(":/img/app1.jpg");
    this->setWindowIcon(ico);

    connect(ui->wzqButton,SIGNAL(clicked()),this,SLOT(wzq()));
    connect(ui->baiduButton,SIGNAL(clicked()),this,SLOT(baidu()));

     pro = new QProcess;
    vbox = new QGridLayout;
    row = 0;
    col = 0;
    ui->appgroupBox->setLayout(vbox);
    vbox->setColumnStretch(6,1);
    vbox->setRowStretch(6,1);


    //--------拖放-----------
    ui->appgroupBox->setAcceptDrops(false);
    setAcceptDrops(true);


//------------从文件中取出app------
     openApp();




     //-----管理 删除-----
     isDelButVisi = true;
     connect(ui->delAllButton,SIGNAL(clicked()),this,SLOT(delAllApp()));


}
void ApplicationCenter::mouPress(QMouseEvent *event)
{
    QMessageBox::information(NULL,tr("ee"),tr("ee"),NULL);
    ApplicationCenter::mouPress(event);
    if(!event->button() == Qt::RightButton)
    {

       return;
    }
    QMenu *Menu = new QMenu();
    QAction *quitAction = new QAction(tr("删除 (&D)"), this);
    Menu->addAction(quitAction);
    ui->baiduButton->setMenu(Menu);
    Menu->exec();
    // connect(quitAction, SIGNAL(triggered()),this, SLOT(mouPress(QMouseEvent*event)));

}

ApplicationCenter::~ApplicationCenter()
{
    delete ui;
}

void ApplicationCenter::on_quitButton_clicked()
{
    this->close();
}

void ApplicationCenter::wzq()
{
    QProcess *myProcess = new QProcess();
    myProcess->start("wzq/Release/Pente.exe");
}
void ApplicationCenter::baidu()
{
    QDesktopServices::openUrl(QUrl("www.baidu.com"));

}

void ApplicationCenter::on_addButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this);
    app = new APP(fileName);





    if(col == 7)
    {
    row++;
    col = 0;
    }
    //添加一个空白项，使布局显示更合理，可根据具体情况灵活应用
    vbox->addWidget(app->button,row,col,Qt::AlignLeft);//水平方向靠左
    col++;

    connect(app,SIGNAL(appdel(QObject*)),this,SLOT(delApp(QObject *)));
    appList.append(app);

     saveApp(fileName);

     fileName = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
     app->button->setToolTip(fileName);


}


//-------将app路径存入文件-----
void ApplicationCenter::saveApp(QString fileName)
{

    QString appFilename=QString("app/app.db");
    QFile appFile(appFilename);
    if(!appFile.open(QFile::WriteOnly|QFile::Text|QFile::Append))//追加
       {

        QMessageBox::warning(NULL,tr("保存文件"),tr("文件无法保存%1：/n%2").arg(appFilename).arg(appFile.errorString()));
        return ;
        }
    QTextStream out(&appFile);
    qDebug()<<fileName;
    out<<fileName;

    out<<"\n";
    appFile.close();

}

void ApplicationCenter::on_weblineEdit_returnPressed()
{
    QString address = ui->weblineEdit->text();
    QDesktopServices::openUrl(QUrl(address));
}

//--------------------拖放----------------
void ApplicationCenter::dragEnterEvent(QDragEnterEvent *event)
{
    if (event->mimeData()->hasFormat("text/uri-list"))//hasFormat("text/uri-list")测试是否含有文字信息的URI
    {
        event->acceptProposedAction();//接受执行拖放行为的一方所设定的预设动作。
    }
}
void ApplicationCenter::dropEvent(QDropEvent *event)
{
    QList<QUrl> urls = event->mimeData()->urls();//QMimeData的urls()取得所拖放档案的QUr
    if (urls.isEmpty())
    {
        return;
    }
    QString fileName = urls.first().toLocalFile();
    app = new APP(fileName);
    qDebug()<<"zzzzzzzzzzzz";
    qDebug()<<fileName;



    if(col == 7)
    {
    row++;
    col = 0;
    }
    //添加一个空白项，使布局显示更合理，可根据具体情况灵活应用
   vbox->addWidget(app->button,row,col,Qt::AlignLeft);//水平方向靠左
    col++;

    connect(app,SIGNAL(appdel(QObject*)),this,SLOT(delApp(QObject *)));
    appList.append(app);

    saveApp(fileName);

    fileName = fileName.right(fileName.size() - fileName.lastIndexOf('/') - 1);
    app->button->setToolTip(fileName);


}

//----------------从文件中取出app------
void ApplicationCenter::openApp()
{
    QString appFilename = QString("app/app.db");
    qDebug()<<"===";
    qDebug()<<appFilename;
    QFile appFile(appFilename);

    if(appFile.open(QIODevice::ReadOnly))
    {
        QTextStream reader(&appFile);
        QString currentrow;
          while(!reader.atEnd())
          {

            currentrow = reader.readLine();
            qDebug()<<"------*-";
            qDebug()<<currentrow;
            if(currentrow == "")
            {
               break;
            }

            QFileInfo appInfo(currentrow);
            QFileIconProvider appIcoPro;
            QIcon icon = appIcoPro.icon(appInfo);

            button = new QPushButton;
            button->setIcon(icon);//设置按钮图标为文件图标
            button->setIconSize(QSize(50,50));
            button->setMaximumSize(70,70);
            app = new APP(currentrow);



            connect(app,SIGNAL(appdel(QObject*)),this,SLOT(delApp(QObject *)));

            appList.append(app);

            qDebug()<<"delete";

           // connect(app,SIGNAL(delapp(QObject*)),this,SLOT(delAllApp()));

            if(col == 7)
            {
            row++;
            col = 0;
            }
           // app->button->setToolTip(fileName);
            //添加一个空白项，使布局显示更合理，可根据具体情况灵活应用
            vbox->addWidget(app->button,row,col,Qt::AlignLeft);//水平方向靠左
            col++;

            currentrow = currentrow.right(currentrow.size() - currentrow.lastIndexOf('/') - 1);
            app->button->setToolTip(currentrow);

         }
    }
}


//------------管理 删除-----
void ApplicationCenter::delAllApp()
{
    if(isDelButVisi == false)
    {

        QListIterator< APP *>  list(appList);

        while (list.hasNext())
        {
            APP *tem_app=list.next();
            tem_app->delAppBt_hide();

        }
       isDelButVisi=true;
        ui->delAllButton->setText(tr("管理"));

    }else
    {
        QListIterator< APP *>  list(appList);

        while (list.hasNext())
        {
            APP *tem_app=list.next();
            tem_app->delAppBt_show();


        }
        isDelButVisi=false;
        ui->delAllButton->setText(tr("完成"));
    }

}


void ApplicationCenter::delApp(QObject *app)

{

    int n=0;
    for(QList<APP*>::iterator it = appList.begin();it < appList.end();++it)
    {
        if((*it) == (APP *)app )
        {
          break;
        }
        n++;

    }
    qDebug()<<n;
    deleteOnelineInFile(n,QString("app/app.db"));
    appList.removeOne((APP *)app);
    delete app;


    int appcount=0;
    int rowcount=2;
    QListIterator< APP *>  list(appList);
    qDebug()<<" hahhaha app";

    while (list.hasNext())
    {
        qDebug()<<"kkkkkkkkk";
        APP * temp =list.next();
        int col=appcount%7;
        int row  =appcount/7;

        if(row>rowcount)
        {
            rowcount++;
        }

         vbox->addWidget(temp->button,row,col,Qt::AlignLeft);
         appcount++;

    }

}



//------------------删除文件的行--------
void ApplicationCenter::DeleteOneline(int nNum, QString &strall)//
{
    int nLine=0;
    int Index=0;
    //算出行数nLine
    while(Index!=-1)
    {
        Index=strall.indexOf('\n',Index+1);
        nLine++;
    }

    //如果是直接从位置0开始删除\n算一个字符"abc\nme\ndo" \n的index是3要删除3+1个字符，即index+1个
    if(nNum==0)
    {
        int nIndex=strall.indexOf('\n');
        strall.remove(0,nIndex+1);
    }
    else
    {
        int nTemp=nNum;
        int nIndex=0,nIndex2=0;
        while(nTemp--)
        {
            //
            nIndex=strall.indexOf('\n',nIndex+1);//这里会更新nIndex
            if(nIndex!=-1)//说明是有效的
            {
                nIndex2=strall.indexOf('\n',nIndex+1);
            }
        }
        //删除的行不是最后一行（从nIndex+1这个位置起nIndex2-nIndex个字符全部抹去）
        if(nNum<nLine-1)
        {
            strall.remove(nIndex+1, nIndex2-nIndex);//不用减一
        }
        //删除的是最后一行（从nIndex起始len-nIndex个字符全抹去）
        //不能从nIndex+1处开始，
        else if(nNum==nLine-1)
        {
            int len=strall.length();
            strall.remove(nIndex,len-nIndex);
        }
        else
        {

        }

    }
}
void ApplicationCenter::deleteOnelineInFile(int nNumLine, QString filename)
{
    QString strall;
    QFile readfile(filename);
    if(readfile.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&readfile);
        strall=stream.readAll();
    }
    readfile.close();
    DeleteOneline(nNumLine, strall);

    QFile writefile(filename);
    if(writefile.open(QIODevice::WriteOnly))
    {
        QTextStream wrtstream(&writefile);
        wrtstream<<strall;
    }
    writefile.close();
}
