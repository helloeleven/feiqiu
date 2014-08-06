#ifndef ADDWORK_H
#define ADDWORK_H

#include <QDialog>

#include <vector>
#include <QCalendarWidget>
#include <QFile>
#include <QTextCharFormat>
#include <QTextStream>
#include <QDate>
#include <QDebug>
using namespace std;

class Record{
public:
    QString Date;
    QString record;
};



namespace Ui {
class addwork;
}

class addwork : public QDialog
{
    Q_OBJECT
    
public:
    explicit addwork(QWidget *parent = 0);
    ~addwork();
    QString Sdate;
    vector<Record> RList;
    Record rd;

    void setDate(QString date);
    void apperRecord();
    void load();
    void saveFile(QString fileName);
    
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
signals:
    void RecordSaved();
    void cancel_signal();
    void save_signal();
private:
    Ui::addwork *ui;
};

#endif // ADDWORK_H
