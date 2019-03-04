#include "invalidplan.h"
#include "ui_invalidplan.h"

invalidPlan::invalidPlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::invalidPlan)
{
    ui->setupUi(this);
}

invalidPlan::~invalidPlan()
{
    delete ui;
}

void invalidPlan::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void invalidPlan::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void invalidPlan::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void invalidPlan::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void invalidPlan::on_Button_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void invalidPlan::on_compareButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}
