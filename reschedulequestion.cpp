#include "reschedulequestion.h"


RescheduleQuestion::RescheduleQuestion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleQuestion)
{
    ui->setupUi(this);


    ui->windowButton->setStyleSheet("border-image:url(forward.jpeg);");
    ui->BAButton->setStyleSheet("border-image:url(forward.jpeg);");

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->Button->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");


    if(themeColor == "white"){

        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->frame_2->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->frame->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->frame_2->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;""border: 1px solid #cdd1d6;""height: 25px;");

    }


    route = 2;
}

RescheduleQuestion::~RescheduleQuestion()
{
    delete ui;
}


void RescheduleQuestion::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleQuestion::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleQuestion::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleQuestion::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleQuestion::on_windowButton_clicked()
{
    rescheduleW = new reschduleWindow(this);
    rescheduleW->show();
    this->hide();
}

void RescheduleQuestion::on_BAButton_clicked()
{
    rescheduleBA = new reschduleBeforeAfter(this);
    rescheduleBA->show();
    this->hide();
}

void RescheduleQuestion::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
