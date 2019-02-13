#include "newactiont.h"
#include "ui_newactiont.h"

NewActionT::NewActionT(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewActionT)
{
    ui->setupUi(this);
}

NewActionT::~NewActionT()
{
    delete ui;
}

void NewActionT::on_ReadButton_clicked()
{
    /*QFile file(problems[id]);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"a","b");
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->planArea->setPlainText(text);*/
    // TO CHECK
}

void NewActionT::on_WriteButton_clicked()
{
    /*QFile file(problems[id]);
       if(!file.open(QFile::WriteOnly | QFile::Text)){
           QMessageBox::warning(this,"a","b");
       }
       QTextStream out(&file);
       QString text = ui->planArea->toPlainText();
       out << text;
       file.flush();
       file.close();*/
    // TO CHECK
}
