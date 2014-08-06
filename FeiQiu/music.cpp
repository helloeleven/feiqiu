#include "music.h"
#include "ui_music.h"
#include <QFileDialog>
#include <QtGlobal>
#include <QDesktopServices>
#include <QDebug>
#include <QTime>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QtGui>
music::music(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::music)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("音乐播放器"));//设置标题
    this->setMouseTracking(true);//启用widget的鼠标跟踪。

    /**初始化媒体**/
    audio =new Phonon::MediaObject();//媒体对象
    audio->setTickInterval(1);
    audioOutput = new Phonon::AudioOutput(Phonon::VideoCategory);//音频输出
    Phonon::createPath(audio,audioOutput);//连接媒体对象与音频输出

    musicInformationMediaObject = new Phonon::MediaObject(this);  //音乐信息对象

    volumeSlider = new Phonon::VolumeSlider(audioOutput,this);  //音量滑动条
    volumeSlider->move(50,70);
    volumeSlider->resize(100,20);
    volumeSlider->setStyleSheet("background-color:rgb(255,255,255,100)");
    volumeSlider->setFixedWidth(250);//固定音量条大小
    volumeSlider->setFocus();

    seekSlider = new Phonon::SeekSlider(audio,this); //进度滑动条
    seekSlider->move(10,35);
    seekSlider->resize(170,20);
    seekSlider->setStyleSheet("background-color:rgb(255,255,255,100)");

    //creatActions();

    connect(audio,SIGNAL(tick(qint64)),this,SLOT(showTime(qint64)));
    //时间显示与歌词的更新,tick发射媒体对象流的时间参数，单位毫秒
    connect(audio,SIGNAL(stateChanged(Phonon::State,Phonon::State)),
            this,SLOT(mediaObjectStateChanged(Phonon::State,Phonon::State)));

    text = new QTextEdit(this);
    text->hide();//用于查找下句歌词以计算时间间隔
    //ui->textEdit->setVisible(false);//文本编辑框不可见，（解析歌词）
    connect(ui->listWidget,SIGNAL(doubleClicked(QModelIndex)),SLOT(listWidget_cellDoubleClicked(QModelIndex)));
    //双击播放歌曲
    connect(musicInformationMediaObject, SIGNAL(stateChanged(Phonon::State,Phonon::State)),
            this, SLOT(musicInformationStateChanged(Phonon::State,Phonon::State)));
    //当加入新音乐时执行
    //自动播放下一首
    connect(audio,SIGNAL(aboutToFinish()),this,SLOT(musicAboutToFinish()));//本首音乐快结束时
    connect(audio,SIGNAL(currentSourceChanged(Phonon::MediaSource)),this,
            SLOT(currentMusicSourceChanged(Phonon::MediaSource)));

     QPalette palette = ui->label_lrc->palette();//设置窗体内歌词颜色
     palette.setColor(QPalette::WindowText,Qt::darkBlue);
     ui->label_lrc->setPalette(palette);


      setAutoFillBackground(true);


      ui->listWidget->setStyleSheet("background:rgb(255,255,255,0,)");
      seekSlider->setToolTip(tr("播放进度条"));//鼠标停留显示 setAcceptDrops(true);
      setAcceptDrops(true);



      QSplashScreen splash(QPixmap(":/imag/tuopan.jpg"));
      QLabel lbl(&splash);
      QMovie mv(":/imag/tuopan.jpg");
      lbl.setMovie(&mv);
      mv.start ();
      splash.show ();
      splash.setCursor(Qt::BlankCursor);
}

music::~music()
{
    delete ui;
}

void music::on_back_clicked()
{
    int index = musicSourceList.indexOf(audio->currentSource()) - 1;
    if(index >= 0)
    {
        audio->stop();
        audio->setCurrentSource(musicSourceList.at(index));
        audio->play();
    }
    else
       return;
}

void music::on_next_clicked()
{
    int index = musicSourceList.indexOf(audio->currentSource()) + 1;
    if(index < musicSourceList.size())
    {
        audio->stop();
        audio->setCurrentSource(musicSourceList.at(index));
        audio->play();
    }
    else
       return;
}

void music::on_open_clicked()
{
    QStringList list = QFileDialog::getOpenFileNames(
                this,tr("打开音乐文件"),
                QDesktopServices::storageLocation(QDesktopServices::MusicLocation),
                tr("Music (*.mp3 *.wma *.wav *.mid *.rm)"));//文件类型过滤
    if(list.isEmpty()) return;
    int index = musicSourceList.size();  //获取当前列表的长度
    foreach(QString string,list)
    {
        Phonon::MediaSource source(string);
        musicSourceList.append(source);//在当前列表后加入一条记录
    }
    if(!musicSourceList.isEmpty())
        musicInformationMediaObject->setCurrentSource(musicSourceList.at(index));


    index = musicSourceList.size();  //获取当前列表的长度
      for(int i=0;i<index;i++)
      {
           musicInformationMediaObject->setCurrentSource(musicSourceList.at(i));
           QString fileName = musicInformationMediaObject->currentSource().fileName();
           QString mp3Name = fileName.right(fileName.length() - fileName.lastIndexOf('/') - 1);

           ui->listWidget->addItem(mp3Name);
     }
}
void music::on_stop_clicked()
{
   audio->stop();
}

void music::on_begin_clicked()
{
    if(musicSourceList.isEmpty())
        {
            //QMessageBox::information(this, tr("no music files"), tr("no files to play"));
            return ;
        }
        audio->setQueue(musicSourceList);//列表循环

    if(audio->state() == Phonon::PlayingState)
        audio->pause();
    else
    {
        audio->play();
    }

}

void music::setCurrentLrc()//设置歌词显示
{
    QString fileName = audio->currentSource().fileName();
    qDebug() << fileName;
    QString lrcName = fileName.remove(fileName.right(3)) + "lrc";
    qDebug() << lrcName;
    QFile file(lrcName);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        ui->label_lrc->setText(tr("当前歌曲目录下未找到歌词文件"));
    }
    QTextStream in(&file);
    //ui->textEdit->setText(in.readAll());
}
void music::listWidget_cellDoubleClicked(QModelIndex index)
{
    audio->stop();
    audio->clearQueue();
    int row = index.row();

    if (row >= musicSourceList.size())
        return;
    audio->setCurrentSource(musicSourceList[row]);
    audio->play();
}



void music::showTime(qint64 time)
{
    qint64 temp = audio->totalTime();
    QTime totalTime(0,(temp / 60000) % 60,(temp / 1000) % 60,time %1000);//(h,min,s,ms)
    QTime curTime(0,(time / 60000) % 60,(time / 1000) % 60,time %1000);
    ui->label_time->setText(tr("%1 / %2")
                       .arg(curTime.toString("mm:ss"))
                       .arg(totalTime.toString("mm:ss")));
    ui->label_time->update();
}



void music::musicAboutToFinish() //本首音乐快结束时
{
    int index = musicSourceList.indexOf(audio->currentSource()) + 1; //下一首
    if(musicSourceList.size() > index)
        audio->enqueue(musicSourceList.at(index));//注意：不会产生状态的改变state
    else
        audio->stop();
}

void music::currentMusicSourceChanged(Phonon::MediaSource source)
        //当自动播放下一曲音乐时，在listWidget中让它为选中状态
{
    ui->listWidget->setCurrentRow(musicSourceList.indexOf(source),
                                  QItemSelectionModel::ToggleCurrent);

    setCurrentLrc();
    QString fileName = audio->currentSource().fileName();
    QString title = fileName.right(fileName.length() - fileName.lastIndexOf('/') - 1);
    this->setWindowTitle(title);//显示“*.mp3”

    audio->pause();
    audio->play();
}

