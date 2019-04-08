#ifndef MODIFICATION_H
#define MODIFICATION_H
#include "addaction.h"
#include "removeaction.h"
#include "replaceaction.h"
#include "rescheduleaction.h"
#include "access.h"
#include <QDialog>
#include "ui_modification.h"
#include "gloabal.h"
#include <QMessageBox>

namespace Ui {
class Modification;
}

class Modification : public QDialog
{
    Q_OBJECT

public:
    explicit Modification(QWidget *parent = 0);
    ~Modification();

private slots:

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_visualiseButton_clicked();

    void on_addButton_clicked();

    void on_removeButton_clicked();

    void on_replaceButton_clicked();

    void on_rescheduleButton_clicked();


    void on_backButton_clicked();

private:
    Ui::Modification *ui;
    AddAction *add;    //[2]
    RemoveAction *remove;    //[2]
    ReplaceAction *replace;    //[2]
    RescheduleAction *reschedule;    //[2]
    Access *access;    //[2]
};

#endif // MODIFICATION_H
