#include "mywidget.h"
#include "ui_mywidget.h"
#include "QMessageBox"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
        ui->setupUi(this);
        setWindowFlags(Qt::Widget|Qt::FramelessWindowHint);

        setWindowOpacity(0.6);

        this->setAutoFillBackground(true);
        QPalette p =this->palette();
        p.setColor(QPalette::Window,QColor(52,203,147));


        resize(QApplication::desktop()->width(),QApplication::desktop()->height());

        x1=-1;

        y1=-1;

        setCursor(Qt::CrossCursor);

        isDrawing=false;

        endPoint=lastPoint;
}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::mouseMoveEvent(QMouseEvent *event)

{

    x1=event->x();

    y1=event->y();

    update();

}

void MyWidget::mousePressEvent(QMouseEvent *event)

{

    if(event->button()==Qt::MiddleButton)           //鼠标中键保存加退出
     {

        return;
    }

    else if(event->button()==Qt::RightButton)       //鼠标右键不保存退出

    {
        this->hide();

        int x,y,w,h;

        x=lastPoint.x();

        y=lastPoint.y();

        w=endPoint.x()-x;

        h=endPoint.y()-y;

        QPixmap tmpixmap=QPixmap::grabWindow(QApplication::desktop()->winId(),x,y,w,h);

        QDateTime dt=QDateTime::currentDateTime();

        QString fileName=dt.toString("yyyyMMddhhmmss")+".jpg";              //图片以当前年月日和时间命名，保存在当前文件夹下。

        tmpixmap.save(fileName,"JPG");

        QMessageBox::information(this, tr("恭喜"), tr("截图成功！"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        return;

    }

    else if(event->button()==Qt::LeftButton)

    {

        lastPoint=event->pos();

        isDrawing=true;

    }

    update();

}

void MyWidget::mouseReleaseEvent(QMouseEvent *event)

{

    if(event->button()==Qt::LeftButton)

    {

        endPoint=event->pos();

        isDrawing=false;

    }

}

void MyWidget::savePixmap()

{

    QClipboard *tmpClipboard=QApplication::clipboard();

    tmpClipboard->setPixmap(pixmap);

}

void MyWidget::paintEvent(QPaintEvent *event)

{

    //painter.drawPixmap(x,y,pixmap);

    int x,y,w,h;

    x=lastPoint.x();

    y=lastPoint.y();

    if(isDrawing)

    {

        w=x1-x;

        h=y1-y;

        pixmap=QPixmap(w,h);

        QPainter painter(this);

        QPen pen=QPen();

        pen.setColor(Qt::black);

        painter.setPen(pen);

        painter.drawRect(x,y,w,h);

    }

    else

    {

        if(endPoint!=lastPoint)

        {

            w=endPoint.x()-x;

            h=endPoint.y()-y;

            pixmap=QPixmap(w,h);

            QPainter painter(this);

            QPen pen=QPen();

            pen.setColor(Qt::black);

            painter.setPen(pen);

            painter.drawRect(x,y,w,h);

            setWindowOpacity(0.6);

        }

    }

    update();

}
