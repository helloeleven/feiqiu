#ifndef SHAREFILE_H
#define SHAREFILE_H

#include <QDialog>
#include <QMouseEvent>
#include <QHostAddress>
#include <QUdpSocket>
#include <QTableWidgetItem>
#include <vector>


#include "UdpConnection.h"
#include "mysharefile.h"
#include "FileInformation.h"

namespace Ui {
class sharefile;
}

class sharefile : public QDialog
{
    Q_OBJECT
    
public:
    explicit sharefile(vector<FileInformation> *list,QWidget *parent = 0);
    ~sharefile();
    
private slots:
    void on_mysharefile_clicked();
    void getItem(QTableWidgetItem*);
    void on_update_clicked();

    void on_download_clicked();

    void on_quit_clicked();

private:
    Ui::sharefile *ui;
    FileInformation *file;
    UdpConnection *downSend;
    FileInformation checkedFile;

private:
    vector<FileInformation> *filelist;
};

#endif // SHAREFILE_H
