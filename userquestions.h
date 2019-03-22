#ifndef USERQUESTIONS_H
#define USERQUESTIONS_H

#include <QDialog>
#include "comparison.h"
#include "reschedulequestion.h"
#include "ui_userquestions.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QListWidgetItem>
#include <QTextStream>
#include <qlabel.h>
#include "comparison.h"
#include "reschedulequestion.h"

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
    int numChecked;
    int isClicked = 0;
    int isClicked2 = 0;
    bool secondClick;
    QString str2;
    QString str4;
    QString to_compare;
    QString listType;


private slots:

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_doneButton_clicked();

    void on_addButton_2_clicked();

    void on_completeButton_clicked();


    void on_backButton_clicked();

private:
    Ui::UserQuestions *ui;
    Comparison * compare;
    RescheduleQuestion *reschedule;
};

#endif // USERQUESTIONS_H
