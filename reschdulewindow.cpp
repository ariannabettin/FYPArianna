#include "reschdulewindow.h"


reschduleWindow::reschduleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reschduleWindow)
{
    ui->setupUi(this);

    ui->doneButton->setStyleSheet("border-image:url(checkIcon.jpeg);");
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->Button->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->windowButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    if(themeColor == "white"){

        ui->frame_3->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->frame->setStyleSheet("background-color: #548da5; color: #000000;");
        ui->frame_3->setStyleSheet("background-color: #548da5; color: #000000;");
    }
}

reschduleWindow::~reschduleWindow()
{
    delete ui;
}


void reschduleWindow::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void reschduleWindow::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void reschduleWindow::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void reschduleWindow::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}


void reschduleWindow::on_Button_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}


void reschduleWindow::on_doneButton_clicked()
{
     compareButtonName = "Window";

     QString val1 = ui->lW1->text();
     QString val2 = ui->lW2->text();

     QString val1_2 = ui->lW1_2->text();
     QString val2_2 = ui->lW2_2->text();

     if(ui->optionA->isChecked() || ui->optionB->isChecked() || ui->optionC->isChecked()){

            if((val1.isEmpty() || val2.isEmpty() || val1_2.isEmpty() || val2_2.isEmpty()) || (!val1[0].isDigit() || !val2[0].isDigit() || !val1_2[0].isDigit() || !val2_2[0].isDigit())){
                 QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is something wrong in the data regarding the window. It could be either you left an empty cell or you inserted a letter instead of a number.");
            }else{
                 startTime= val1 + " : "  + val2;
                 endTime= val1_2 + " : " + val2_2;

                 if(ui->optionA->isChecked()){
                      windowOpt = "constrain to window";
                 }else if(ui->optionB->isChecked()){
                      windowOpt = "force at least once";
                 }else if (ui->optionC) {
                      windowOpt = "constrain and force";
                 }
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                 Plan2 = Plan + "\n" + "Start Time: " + startTime + "\n" + "End Time: " + endTime + "\n" + "Option Chosen: '" + windowOpt + "'";
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                 compare = new Comparison(this);
                 compare->show();
                 this->hide();
            }

     }else{
          QMessageBox::warning(this,"Error:","You should choose one of the options available.");
     }
}


void reschduleWindow::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
