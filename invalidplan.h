#ifndef INVALIDPLAN_H
#define INVALIDPLAN_H

#include <QDialog>

namespace Ui {
class invalidPlan;
}

class invalidPlan : public QDialog
{
    Q_OBJECT

public:
    explicit invalidPlan(QWidget *parent = 0);
    ~invalidPlan();

private slots:
    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_Button_clicked();

    void on_compareButton_clicked();

private:
    Ui::invalidPlan *ui;
};

#endif // INVALIDPLAN_H
