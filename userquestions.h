#ifndef USERQUESTIONS_H
#define USERQUESTIONS_H

#include <QDialog>
#include "comparison.h"
#include "rescheduleaction.h"

namespace Ui {
class UserQuestions;
}

class UserQuestions : public QDialog
{
    Q_OBJECT

public:
    explicit UserQuestions(QWidget *parent = 0);
    ~UserQuestions();
    int oneAction;
    int twoActions;


private slots:

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_doneButton_clicked();

    void on_completeButton_clicked();

   // void on_question_label0_linkActivated(const QString &link);

    void on_addButton_2_clicked();

private:
    Ui::UserQuestions *ui;
    Comparison * compare;
    RescheduleAction *reschedule;
};

#endif // USERQUESTIONS_H
