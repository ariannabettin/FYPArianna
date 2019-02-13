#include "comparison.h"
#include "ui_comparison.h"
#include "gloabal.h"
#include <QMessageBox>

Comparison::Comparison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comparison)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->title_label2->setText(plans[id]+" 2");
    ui->planArea->setText(Plan);                                               // displays the old and the new plan
    ui->planArea_2->setText(Plan2);
    ui->instruction->setText("Please, save the plan if you want to keep working on it after the modification.");

}

Comparison::~Comparison()
{
    delete ui;
}

void Comparison::on_saveButton_clicked()    //saves the new plan and deletes the previous one
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    QMessageBox::warning(this,"Saving", "If you save this plan the old version will be deleted!");
    Plan = Plan2;
    Plan2 = " ";

}

void Comparison::on_homeButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();

}

void Comparison::on_selectButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void Comparison::on_visualiseButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Comparison::on_modifyButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
}

void Comparison::on_addButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}
