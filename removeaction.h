#ifndef REMOVEACTION_H
#define REMOVEACTION_H
#include "domainfile.h"
#include "comparison.h"
#include "ui_removeaction.h"
#include "newaction.h"
#include "gloabal.h"
#include "comparison.h"
#include <QListWidgetItem>
#include <QMessageBox>
#include "gloabal.h"
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
    int numChecked;

private slots:

    void on_homeButton_clicked();

    void on_visualiseButton_clicked();

    void on_selectButton_clicked();

    void on_removePlanButton_clicked();

    void on_removeFileButton_clicked();

    void on_modifyButton_clicked();





    void on_backButton_clicked();

private:
    Ui::RemoveAction *ui;
    domainFile* file;    //[2]
    Comparison *compare;    //[2]

};

#endif // REMOVEACTION_H
