#include "fileclasspf.h"
#include "ui_fileclasspf.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QTextStream>

fileclassPF::fileclassPF(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileclassPF)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);

    QFile file(problems[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

fileclassPF::~fileclassPF()
{
    delete ui;
}

void fileclassPF::on_openFileButton_clicked()
{
    QFile file(problems[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}

void fileclassPF::on_saveButton_clicked()
{
    QFile file("newPF_AIP.pddl");
    if(!file.open(QFile::WriteOnly | QFile::Text)){
    }
    QTextStream out(&file);
    QString text = ui->planArea->toPlainText();
    out<< text;
    file.flush();
    file.close();
}


void fileclassPF::on_newFile_clicked()
{
    QFile file("newPF_AIP.pddl");
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);
    file.close();
}


void fileclassPF::on_close_clicked()
{
     this->hide();
}


void fileclassPF::on_replaceButton_clicked()
{
    domains[id] = "newPF_AIP.pddl";
}


