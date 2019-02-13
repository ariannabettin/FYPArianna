#include "accessfile.h"
#include "ui_accessfile.h"
#include "newaction.h"
#include "newactiont.h"
#include <QMessageBox>

AccessFile::AccessFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AccessFile)
{
    ui->setupUi(this);
}

AccessFile::~AccessFile()
{
    delete ui;
}

void AccessFile::on_homeButton_clicked()
{

    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void AccessFile::on_selectButton_clicked()
{

    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void AccessFile::on_visualiseButton_clicked()
{

    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void AccessFile::on_modifyButton_clicked()
{

    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void AccessFile::on_domainButton_clicked()
{
    newA = new NewAction(this);
    newA->show();
}

