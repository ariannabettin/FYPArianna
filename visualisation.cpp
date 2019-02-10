#include "visualisation.h"
#include "ui_visualisation.h"
#include "gloabal.h"
#include "modification.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

Visualisation::Visualisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Visualisation)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);

}

Visualisation::~Visualisation()
{
    delete ui;
}

void Visualisation::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();                     // goes back to the home window
    parent->show();
     this->hide();
}

void Visualisation::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget();                                     // goes back to the select button
    parent->show();
     this->hide();
}

void Visualisation::on_modifyButton_clicked()                                   // goes to the modification window
{
    modify = new Modification(this);
    modify->show();
    this->hide();
}

void Visualisation::on_addNewButton_clicked()                                   // goes to the home window
{
    //home
}

void Visualisation::on_valButton_clicked()
{
    //Plan validated thanks to an external validator
}


void Visualisation::on_visualiseButton_2_clicked()                               // displays the plan in the planArea
{
   /* QFile file("PLAN.txt");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    Plan = ui->planArea->toPlainText();*/
}


void Visualisation::on_questionButton_clicked()                                  //goes to the user question window
{
    question = new UserQuestions(this);
    question->show();
    this->hide();
}
