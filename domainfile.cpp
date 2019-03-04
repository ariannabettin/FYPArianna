#include "domainfile.h"
#include "ui_domainfile.h"
#include <QTextStream>
#include <QMessageBox>
#include "gloabal.h"


domainFile::domainFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::domainFile)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);

    QFile file(domains[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
}

domainFile::~domainFile()
{
    delete ui;
}

void domainFile::on_openFileButton_clicked()
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

void domainFile::on_saveButton_clicked()
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

void domainFile::on_newFile_clicked()
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

void domainFile::on_close_clicked()
{
    this->hide();
}
