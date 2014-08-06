#ifndef TITLE_TIPS_H
#define TITLE_TIPS_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
class title_tips : public QWidget
{
    Q_OBJECT
public:
    explicit title_tips(QWidget *parent = 0);
    
signals:
    void myClose();

public:
    void setTitleText(QString title);
private:
    QLabel *titleText;//标题文字
    QPushButton *close_button;//标题关闭按钮

protected:
    void paintEvent(QPaintEvent *);
};

#endif // TITLE_TIPS_H
