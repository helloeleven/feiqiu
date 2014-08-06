#ifndef CHATLOGGING_H
#define CHATLOGGING_H

#include <QDialog>
#include"PersonLoginInfo.h"
namespace Ui {
class chatLogging;
}

class chatLogging : public QDialog
{
    Q_OBJECT
    
public:
    explicit chatLogging(PersonLoginInfo *pb,QWidget *parent = 0);
    ~chatLogging();
    
private slots:
    void on_quitButton_clicked();
    void clearChat();
private:
    Ui::chatLogging *ui;
    PersonLoginInfo *pb;
};

#endif // CHATLOGGING_H
