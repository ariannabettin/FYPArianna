#ifndef ADDACTION_H
#define ADDACTION_H

#include <QDialog>
#include "domainfile.h"
#include "comparison.h"
#include "ui_addaction.h"
#include "gloabal.h"
#include "newaction.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include <QListWidgetItem>
#include "comparison.h"

namespace Ui {
class AddAction;
}

class AddAction : public QDialog
{
    Q_OBJECT

public:
    explicit AddAction(QWidget *parent = 0);
    ~AddAction();
    int numChecked;
    int isClicked = 0;
    int isClicked2 = 0;

private slots:
    void on_homeButton_clicked();

    void on_visualiseButton_clicked();

    void on_modifyButton_clicked();

    void on_newActionButton_clicked();

    void on_existinButton_clicked();
    
    void on_selectButton_clicked();

    void on_doneButton_clicked();

    void on_addButton_2_clicked();

    void on_backButton_clicked();

private:
    Ui::AddAction *ui;
    domainFile *file;
    Comparison * compare;

};

#endif // ADDACTION_H
