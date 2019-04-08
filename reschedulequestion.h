#ifndef RESCHEDULEQUESTION_H
#define RESCHEDULEQUESTION_H

#include <QDialog>
#include "comparison.h"
#include "reschdulebeforeafter.h"
#include "reschdulewindow.h"
#include "ui_reschedulequestion.h"
#include "gloabal.h"
#include <QMessageBox>
#include "comparison.h"

namespace Ui {
class RescheduleQuestion;
}

class RescheduleQuestion : public QDialog
{
    Q_OBJECT

public:
    explicit RescheduleQuestion(QWidget *parent = 0);
    ~RescheduleQuestion();
    int numChecked;

private slots:

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_windowButton_clicked();

    void on_BAButton_clicked();

    void on_backButton_clicked();

private:
    Ui::RescheduleQuestion *ui;
    Comparison *compare;    //[2]
    reschduleBeforeAfter * rescheduleBA;    //[2]
    reschduleWindow * rescheduleW;    //[2]
};

#endif // RESCHEDULEQUESTION_H
