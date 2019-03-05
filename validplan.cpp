#include "validplan.h"
#include "ui_validplan.h"

validPlan::validPlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::validPlan)
{
    ui->setupUi(this);

}

validPlan::~validPlan()
{
    delete ui;
}

void validPlan::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void validPlan::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void validPlan::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void validPlan::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void validPlan::on_Button_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void validPlan::on_compareButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
