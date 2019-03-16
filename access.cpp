#include "access.h"

Access::Access(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Access)
{
    ui->setupUi(this);

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selecyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->accessButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");


    if(themeColor == "white"){

        ui->problemButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->domainButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

         ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->domainButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->problemButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->frame->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;");

    }
}

Access::~Access()
{
    delete ui;
}


void Access::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void Access::on_selecyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void Access::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}


void Access::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();

}


void Access::on_domainButton_clicked()
{
    file  = new fileClass(this);            //opens domain file
    file->show();

}


void Access::on_problemButton_clicked()
{
    PFfile = new fileclassPF(this);         // opens problem file
    PFfile->show();
}



