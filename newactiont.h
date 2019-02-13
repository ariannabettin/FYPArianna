#ifndef NEWACTIONT_H
#define NEWACTIONT_H

#include <QDialog>

namespace Ui {
class NewActionT;
}

class NewActionT : public QDialog
{
    Q_OBJECT

public:
    explicit NewActionT(QWidget *parent = 0);
    ~NewActionT();

private slots:
    void on_ReadButton_clicked();

    void on_WriteButton_clicked();

private:
    Ui::NewActionT *ui;
};

#endif // NEWACTIONT_H
