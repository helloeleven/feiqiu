#ifndef MUSIC_H
#define MUSIC_H

#include <QDialog>
#include <phonon>
#include <QTimer>

#include <QTextEdit>

namespace Ui {
class music;
}

class music : public QDialog
{
    Q_OBJECT
    
public:
    explicit music(QWidget *parent = 0);
    ~music();
    void creatActions();//创建动作
    void setCurrentLrc();//设置歌词显示
    
private slots:
    void on_back_clicked();

    void on_next_clicked();

    void on_open_clicked();

    void on_stop_clicked();

    void on_begin_clicked();

    void on_list_clicked();

private:
    Ui::music *ui;
    Phonon::MediaObject *audio;//管理媒体源
    Phonon::MediaObject *musicInformationMediaObject;//
    Phonon::VideoWidget *videoWidget;//
    Phonon::AudioOutput *audioOutput;//连接物理设备
    Phonon::SeekSlider *seekSlider;//实现进度条
    Phonon::VolumeSlider *volumeSlider;//音量调节
    QList<Phonon::MediaSource> musicSourceList;//播放列表

    QTimer *timer;
    QTextEdit *text;//解析歌词
    QIcon *iconplay;
    QIcon *iconpause;

    QAction *play;
    QAction *stop;
    QAction *open;
    QAction *sound;
    QAction *exit;
    QAction *remove;
    QMap<QString, QString> lrcMap;

private slots:
    void listWidget_cellDoubleClicked(QModelIndex index);//双击选歌
    void showTime(qint64);//时间更新显示

    void musicAboutToFinish();//歌曲快结束时
    void currentMusicSourceChanged(Phonon::MediaSource);
};

#endif // MUSIC_H
