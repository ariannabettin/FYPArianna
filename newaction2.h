#ifndef NEWACTION_H
#define NEWACTION_H

#include <QDialog>

namespace Ui {
class NewAction2;
}

class NewAction2 : public QDialog
{
    Q_OBJECT

public:
    explicit NewAction2(QWidget *parent = 0);
    ~NewAction2();

private slots:
    void on_ReadButton_clicked();

    void on_WriteButton_clicked();

    void on_doneButton_clicked();

private:
    Ui::NewAction2 *ui;
};

#endif // NEWACTION_H
