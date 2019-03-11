#include "window.h"
#include "ui_window.h"
#include <QButtonGroup>
#include <QMessageBox>
#include "gloabal.h"

Window::Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->statementLabel->setText(" ");
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
            windowOpt =  ui->optionA->text();
        }else if(ui->optionB->isChecked()){
            windowOpt =  ui->optionA->text();
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
