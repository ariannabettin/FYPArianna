#include "window.h"


Window::Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->statementLabel->setText(" ");

    if(themeColor == "white"){

        ui->closeButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->groupBox->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->closeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");
        ui->groupBox->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");

    }

}

Window::~Window()
{
    delete ui;
}


void Window::on_doneButton_clicked()
{
    isClicked++;
    int mBox= 0;
    int mBox2 = 0;
    QString val1 = ui->lW1->text();
    QString val2 = ui->lW2->text();

    QString val1_2 = ui->lW1_2->text();
    QString val2_2 = ui->lW2_2->text();


    if((val1.isEmpty() || val2.isEmpty() || val1_2.isEmpty() || val2_2.isEmpty())||(!val1[0].isDigit() || !val2[0].isDigit() || !val1_2[0].isDigit() || !val2_2[0].isDigit())){
        QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is an empty cell or that you inserted letters instead of numbers.");
    }else{
        startTime= val1 + " : " + val2;
        endTime= val1_2 + " : " + val2_2;

        if(ui->optionA->isChecked()){
            windowOpt =  ui->optionA->text();
        }else if(ui->optionB->isChecked()){
            windowOpt =  ui->optionB->text();
        }else if(ui->optionC->isChecked()){
            windowOpt =  ui->optionC->text();
        }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
        }

    ui->statementLabel->setText("Window time chosen: " + startTime + " - " + endTime);

    }
}


void Window::on_closeButton_clicked()
{
    if(isClicked > 0){
        windowORAct = "window";
       this->hide();
    }else{
        QMessageBox::warning(this,"Check data: ", "Please, click button 'Done' to check if you have inserted the right data.");
    }

}
