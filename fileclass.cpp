#include "fileclass.h"
#include "ui_fileclass.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "gloabal.h"

fileClass::fileClass(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileClass)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
}

fileClass::~fileClass()
{
    delete ui;
}

void fileClass::on_writeButton_clicked()
{
    QFile file("newDomainAIP.pddl");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
    }
    QTextStream out(&file);
    QString text = ui->planArea->toPlainText();
    out<< text;
    file.flush();
    file.close();

}

void fileClass::on_readButton_clicked()
{
    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

void fileClass::on_newFile_clicked()
{
    QFile file("newDomainAIP.pddl");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

void fileClass::on_close_clicked()
{
    this->hide();
}



void fileClass::on_replaceButton_clicked()
{
    domains[id] = "newDomainAIP.pddl";
}
