#ifndef MODIFICATION_H
#define MODIFICATION_H
#include "addaction.h"
#include "removeaction.h"
#include "replaceaction.h"
#include "rescheduleaction.h"
#include "changeaction.h"
#include "access.h"
#include <QDialog>

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

    void on_changeButton_clicked();

    void on_accessButton_clicked();

private:
    Ui::Modification *ui;
    AddAction *add;
    RemoveAction *remove;
    ReplaceAction *replace;
    RescheduleAction *reschedule;
    ChangeAction *change;
    Access *access;
};

#endif // MODIFICATION_H
