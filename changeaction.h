#ifndef CHANGEACTION_H
#define CHANGEACTION_H

#include <QDialog>

namespace Ui {
class ChangeAction;
}

class ChangeAction : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeAction(QWidget *parent = 0);
    ~ChangeAction();

private slots:
    void on_homeButton_clicked();

    void on_homeButton_2_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

private:
    Ui::ChangeAction *ui;
};

#endif // CHANGEACTION_H
