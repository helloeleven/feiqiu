#ifndef WORK_H
#define WORK_H
#include "addwork.h"
#include "ui_addwork.h"
#include <QDialog>

namespace Ui {
class work;
}

class work : public QDialog
{
    Q_OBJECT
    
public:
    explicit work(QWidget *parent = 0);
    ~work();
     addwork *m_add;
     void loadColor();

    
private slots:
    void on_add_work_clicked();

    void on_calendarWidget_activated(const QDate &date);
    void changeColor();

    void on_calendarWidget_clicked(const QDate &date);

    void on_show_all_work_clicked();
    void deal_cancel_come_son();
    void deal_save_come_son();

private:
    Ui::work *ui;

};

#endif // WORK_H
