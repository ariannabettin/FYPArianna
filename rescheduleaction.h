#ifndef RESCHEDULEACTION_H
#define RESCHEDULEACTION_H
#include "window.h"
#include "beforeafter.h"
#include <QDialog>

namespace Ui {
class RescheduleAction;
}

class RescheduleAction : public QDialog
{
    Q_OBJECT

public:
    explicit RescheduleAction(QWidget *parent = 0);
    ~RescheduleAction();

private slots:
    void on_timeWindow_clicked();

    void on_timeWindowSequence_clicked();

    void on_BAButton_clicked();

    void on_BAButtonSeq_clicked();

    void on_homeButton_clicked();

    void on_homeButton_2_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_selectButton_clicked();

private:
    Ui::RescheduleAction *ui;
    Window *window;
    Window *window2;
    BeforeAfter *befaft;
    BeforeAfter *befaft2;

};

#endif // RESCHEDULEACTION_H
