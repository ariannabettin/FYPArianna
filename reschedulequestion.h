#ifndef RESCHEDULEQUESTION_H
#define RESCHEDULEQUESTION_H

#include <QDialog>
#include "comparison.h"
#include "reschdulebeforeafter.h"
#include "reschdulewindow.h"

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

private:
    Ui::RescheduleQuestion *ui;
    Comparison *compare;
    reschduleBeforeAfter * rescheduleBA;
    reschduleWindow * rescheduleW;
};

#endif // RESCHEDULEQUESTION_H