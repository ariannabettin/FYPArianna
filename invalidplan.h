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


private:
    Ui::invalidPlan *ui;
};

#endif // INVALIDPLAN_H
