#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QStandardItemModel>
#include <QAbstractItemView>

#include "mainwindow.h"
#include "chatdialog.h"

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    QStandardItemModel *model;

    void additem(QString, QString);

    void deleteitem();

    void updateitem(QString, QString);

    //Êó±êÍÏ¶¯²Ù×÷
    bool	m_MousePressed;
    QPoint	m_MousePos;
    QPoint	m_WindowPos;
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);


    ~SearchDialog();

private:
    Ui::SearchDialog *ui;
private slots:
        void itemclicked(QModelIndex index);
        void close_window();
};

#endif // SEARCHDIALOG_H
