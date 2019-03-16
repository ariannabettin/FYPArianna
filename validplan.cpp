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

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->compareButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->validatePlan->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");


    if(themeColor == "white"){

        ui->exportButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");

        ui->reportLabel->setStyleSheet("background-color: #c6c3dd; color: #282827;");

        ui->renameLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");



    }else if(themeColor == "black"){

        ui->exportButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");

        ui->reportLabel->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;");

        ui->renameLine->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");


    }


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
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void validPlan::on_selectButton_clicked()
{
    numItems = 0;
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


void validPlan::on_compareButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void validPlan::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void validPlan::on_exportButton_clicked()
{
     QString filename;

    if(ui->renameLine->text().isEmpty()){
        QString number = QString::number(fileNameNumber);
        filename = "newXPlan(" + number + ").txt";
        QMessageBox::information(this,"Information:","Be aware that if you save using the default name and you already have other files from previous session, those will be overwritten.");
        fileNameNumber++;
    }else{
        filename = ui->renameLine->text() + ".txt";
    }

    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
    }
    QTextStream out(&file);
    QString text = Plan;
    out<< text;

    file.flush();
    file.close();
}
