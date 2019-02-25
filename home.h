#ifndef HOME_H
#define HOME_H

#include "selection.h"
#include <QMainWindow>

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();
    QString domain_path;
    QString problem_path;
    QString plan_path;
    QString newPlan[3];


private slots:
    void on_DomainLoadButton_clicked();

    void on_ProblemLoadButton_clicked();

    void on_PathLoadButton_clicked();

    void on_doneButton_clicked();

    void on_saveButton_clicked();



private:
    Ui::Home *ui;
    Selection *select;
};

#endif // HOME_H
