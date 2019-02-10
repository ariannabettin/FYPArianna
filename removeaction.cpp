#include "removeaction.h"
#include "ui_removeaction.h"
#include "newaction.h"
#include "gloabal.h"

RemoveAction::RemoveAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
}

RemoveAction::~RemoveAction()
{
    delete ui;
}

void RemoveAction::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_selecyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void RemoveAction::on_removePlanButton_clicked()
{
    //list with all actoions in the plan
}

void RemoveAction::on_valButton_clicked()
{
    //validator
}

void RemoveAction::on_removeFileButton_clicked()
{
    file  = new fileClass(this);
    file->show();

}
