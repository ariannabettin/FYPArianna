#ifndef NEWACTION_H
#define NEWACTION_H

#include <QDialog>

namespace Ui {
class NewAction;
}

class NewAction : public QDialog
{
    Q_OBJECT

public:
    explicit NewAction(QWidget *parent = 0);
    ~NewAction();

private slots:
    void on_ReadButton_clicked();

    void on_WriteButton_clicked();

    void on_doneButton_clicked();

private:
    Ui::NewAction *ui;
};

#endif // NEWACTION_H
