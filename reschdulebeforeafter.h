#ifndef RESCHDULEBEFOREAFTER_H
#define RESCHDULEBEFOREAFTER_H

#include <QDialog>
#include "comparison.h"
#include "ui_reschdulebeforeafter.h"
#include "gloabal.h"
#include <QMessageBox>

namespace Ui {
class reschduleBeforeAfter;
}

class reschduleBeforeAfter : public QDialog
{
    Q_OBJECT

public:
    explicit reschduleBeforeAfter(QWidget *parent = 0);
    ~reschduleBeforeAfter();
    int isClicked = 0;
    int numChecked;

private slots:
    
    void on_doneButton_clicked();
    
    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_Button_clicked();

    void on_homeButton_clicked();

    void on_backButton_clicked();

private:
    Ui::reschduleBeforeAfter *ui;
    Comparison * compare;    //[2]
};

#endif // RESCHDULEBEFOREAFTER_H
