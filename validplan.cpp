#include "validplan.h"
#include "ui_validplan.h"
#include "gloabal.h"
#include "selection.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

validPlan::validPlan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::validPlan)
{
    ui->setupUi(this);

    QFile file("ValidationReport.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->reportLabel->setText(text);
    file.close();
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
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
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
