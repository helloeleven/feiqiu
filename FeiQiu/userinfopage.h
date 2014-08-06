#ifndef USERINFOPAGE_H
#define USERINFOPAGE_H

#include <QDialog>
#include <QPoint>
#include <QMouseEvent>
#include <QDir>
#include <QMessageBox>
#include "Information_file_save.h"
#include "PersonInformation.h"
#include "UdpConnection.h"
#include "SystemInfo.h"

namespace Ui {
class UserInfoPage;
}

class UserInfoPage : public QDialog
{
    Q_OBJECT
    
public:
    explicit UserInfoPage(QWidget *parent = 0);
    ~UserInfoPage();
    void InformationInit();
    
private slots:
    void on_Cancel_clicked();
    void on_SaveInfo_clicked();


private:
    Ui::UserInfoPage *ui;


private:
    bool	m_MousePressed;
    QPoint	m_MousePos;
    QPoint	m_WindowPos;

    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);


private:
    QStringList HeadIconList;
    UdpConnection udpsocket;
    void add_pic();

};

#endif // USERINFOPAGE_H
