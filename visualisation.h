#ifndef VISUALISATION_H
#define VISUALISATION_H
#include "modification.h"
#include "userquestions.h"
#include <QDialog>

namespace Ui {
class Visualisation;
}

class Visualisation : public QDialog
{
    Q_OBJECT

public:
    explicit Visualisation(QWidget *parent = 0);
    ~Visualisation();

private slots:
    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_modifyButton_clicked();

    void on_addNewButton_clicked();

    void on_valButton_clicked();

    void on_visualiseButton_2_clicked();

    void on_questionButton_clicked();



private:
    Ui::Visualisation *ui;
    Modification *modify;
    UserQuestions * question;
};

#endif // VISUALISATION_H
