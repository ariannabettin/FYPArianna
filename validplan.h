#ifndef VALIDPLAN_H
#define VALIDPLAN_H

#include <QDialog>


namespace Ui {
class validPlan;
}

class validPlan : public QDialog
{
    Q_OBJECT

public:
    explicit validPlan(QWidget *parent = 0);
    ~validPlan();

private slots:
    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_compareButton_clicked();

    void on_backButton_clicked();

    void on_exportButton_clicked();

private:
    Ui::validPlan *ui;
};

#endif // VALIDPLAN_H
