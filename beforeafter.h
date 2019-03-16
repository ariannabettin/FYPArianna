#ifndef BEFOREAFTER_H
#define BEFOREAFTER_H

#include <QDialog>
#include "ui_beforeafter.h"
#include <QMessageBox>
#include "gloabal.h"
#include <QFile>
#include <QListWidgetItem>
#include <QTextStream>

namespace Ui {
class BeforeAfter;
}

class BeforeAfter : public QDialog
{
    Q_OBJECT

public:
    explicit BeforeAfter(QWidget *parent = 0);
    ~BeforeAfter();
    int isClicked = 0;
    int numChecked;

private slots:
    void on_doneButton_clicked();

    void on_closeButton_clicked();

private:
    Ui::BeforeAfter *ui;
};

#endif // BEFOREAFTER_H
