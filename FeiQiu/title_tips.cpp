#include "title_tips.h"
#include <QLabel>
#include <QHBoxLayout>
#include <QPainter>
#include <QLinearGradient>
#include <QIcon>
#include <QPushButton>
title_tips::title_tips(QWidget *parent) :
    QWidget(parent)

{
        titleText=new QLabel;
        close_button=new QPushButton;
        close_button->setIcon(QIcon("img/close"));
        //close_button->loadPixmap("tipclose");
        //close_button->setToolTip(tr("close"));
        QHBoxLayout *layout=new QHBoxLayout;
        layout->addWidget(titleText,0,Qt::AlignLeft);
        layout->addStretch();
        layout->addWidget(close_button,0,Qt::AlignRight);
        layout->setMargin(0);
        setLayout(layout);
        setFixedHeight(22);

        connect(close_button,SIGNAL(clicked()),this,SIGNAL(myClose()));
}
void title_tips::paintEvent(QPaintEvent *)
{
    QLinearGradient linear(rect().topLeft(),rect().bottomRight());
    linear.setColorAt(0,QColor(227,207,87));
    linear.setColorAt(0.5,QColor(245,222,179));
    linear.setColorAt(1,QColor(189,252,201));

    QPainter painter(this);
    painter.setBrush(QBrush(linear));
    painter.setPen(Qt::NoPen);
    painter.drawRect(rect());
}

void title_tips::setTitleText(QString title)
{
    titleText->setText(title);
}


