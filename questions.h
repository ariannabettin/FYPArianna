#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QDialog>
#include "listofactions.h"

namespace Ui {
class Questions;
}

class Questions : public QDialog
{
    Q_OBJECT

public:
    explicit Questions(QWidget *parent = 0);
    ~Questions();

private slots:
    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_AButton_clicked();

    void on_comboA_activated(const QString &arg1);

    void on_choiceButton_clicked();

    void on_cButton_clicked();

    void on_pushButton_clicked();

    void on_AorB_clicked();

    void on_doneButton_clicked();

private:
    Ui::Questions *ui;
    ListOfActions *list;
};

#endif // QUESTIONS_H
