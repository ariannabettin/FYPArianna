#include "newaction.h"
#include "ui_newaction.h"
#include "gloabal.h"
#include <QFile>
#include <QDebug>
#include <QTextStream>
#include <QMessageBox>
#include <QTextBrowser>

NewAction::NewAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewAction)
{
    ui->setupUi(this);



}

NewAction::~NewAction()
{
    delete ui;
}

void NewAction::on_ReadButton_clicked()
{
   /*QMessageBox::information(this,"a","b");
   QFile file(domains[id]);
   file.open(QIODevice::ReadOnly);
   QTextStream stream(&file);
   QString content = stream.readAll();
   file.close();
   ui->planArea->setText(content);*/


}

void NewAction::on_WriteButton_clicked()
{

    // TO CHECK
}

void NewAction::on_doneButton_clicked()
{
    // Add Section
}
