#include "modification.h"
#include "ui_modification.h"
#include "gloabal.h"
#include <QMessageBox>

Modification::Modification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modification)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    route = 0;
}

Modification::~Modification()
{
    delete ui;
}

void Modification::on_homeButton_clicked()                                          //goes back to the home window
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Modification::on_selectButton_clicked()                                        // goes back to the selection window
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Modification::on_visualiseButton_clicked()                                     // goes back to the visualisation window
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void Modification::on_removeButton_clicked()                                         // goes to the the remove action window
{
    remove = new RemoveAction(this);
    remove->show();
    this->hide();
}

void Modification::on_addButton_clicked()                                            // goes to the the add action window
{
    add = new AddAction(this);
    add->show();
    this->hide();
}

void Modification::on_replaceButton_clicked()                                        // goes to the the replace action window
{
    replace = new ReplaceAction(this);
    replace->show();
}

void Modification::on_rescheduleButton_clicked()                                     // goes to the the reschedule action window
{
    reschedule = new RescheduleAction(this);
    reschedule->show();
    this->hide();
}






