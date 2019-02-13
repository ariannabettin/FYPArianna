#ifndef REMOVEACTION_H
#define REMOVEACTION_H
#include "fileclass.h"
#include <QDialog>

namespace Ui {
class RemoveAction;
}

class RemoveAction : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveAction(QWidget *parent = 0);
    ~RemoveAction();

private slots:
    void on_homeButton_clicked();

    void on_visualiseButton_clicked();

    void on_selectButton_clicked();

    void on_removePlanButton_clicked();

    void on_valButton_clicked();

    void on_removeFileButton_clicked();

    void on_modifyButton_clicked();



private:
    Ui::RemoveAction *ui;
    fileClass* file;

};

#endif // REMOVEACTION_H
