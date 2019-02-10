#include "comparison.h"
#include "ui_comparison.h"
#include "gloabal.h"

Comparison::Comparison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comparison)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->title_label2->setText(plans[id]+" 2");
    ui->planArea->setText(Plan);                                               // displays the old and the new plan
    ui->planArea_2->setText(Plan2);

}

Comparison::~Comparison()
{
    delete ui;
}

void Comparison::on_saveButton_clicked()                                        //saves the new plan and deletes the previous one
{
    Plan = Plan2;
    Plan2 = " ";
}

void Comparison::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
    ui->planArea->clear();
    ui->planArea_2->clear();
}

void Comparison::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
    ui->planArea->clear();
    ui->planArea_2->clear();
}

void Comparison::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
    ui->planArea->clear();
    ui->planArea_2->clear();
}

void Comparison::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
    ui->planArea->clear();
    ui->planArea_2->clear();
}

void Comparison::on_addButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
    ui->planArea->clear();
    ui->planArea_2->clear();
}
