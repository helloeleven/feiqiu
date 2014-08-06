#ifndef NEW_MSG_H
#define NEW_MSG_H
#include "title_tips.h"
#include <QWidget>

class new_msg : public QWidget
{
    Q_OBJECT
public:
    explicit new_msg(QWidget *parent = 0);
    ~new_msg();
    void showAsQQ();//在右下角显示
        int timeCount;
        double tran;
public slots:
        void setMsg(QString title,QString content);
private slots:
        void myMove();
        void myStay();
        void myClose();

private:
        title_tips *titleW;

        QLabel *content;

        QPoint normalPoint;//完全显示时位置
        QRect deskRect;

        QTimer *timerShow;//平滑显示的定时器
        QTimer *timerStay;//停留时间的定时器 10s
        QTimer *timerClose;//关闭淡出的定时器

protected:
        void paintEvent(QPaintEvent *);
    
};

#endif // NEW_MSG_H
