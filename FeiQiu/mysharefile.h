#ifndef MYSHAREFILE_H
#define MYSHAREFILE_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QHostAddress>
#include <QUdpSocket>
#include <vector>

#include "UdpConnection.h"
#include "FileInformation.h"

namespace Ui {
class mysharefile;
}

class mysharefile : public QDialog
{
    Q_OBJECT
    
public:
    explicit mysharefile(vector<FileInformation> *list,QWidget *parent = 0);
    ~mysharefile();
    
private slots:
    void on_addfile_clicked();

    void on_OK_clicked();

private:
    Ui::mysharefile *ui;
    QFile *openFile;
    QString filename;
    UdpConnection *send;

private:
    vector<FileInformation> *filelist;
};

#endif // MYSHAREFILE_H
