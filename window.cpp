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
    int mBox= 0;
    int mBox2 = 0;
    QString val1 = ui->lW1->text();
    QString val2 = ui->lW2->text();
    QString val3 = ui->lW3->text();
    QString val4 = ui->lW4->text();

    QString val1_2 = ui->lW1->text();
    QString val2_2 = ui->lW2->text();
    QString val3_2 = ui->lW3->text();
    QString val4_2 = ui->lW4->text();

    if(val1.size()>1 || val2.size()>1 || val3.size()>1 || val4.size()>1){
        QMessageBox::warning(this,"Window size set up:", "Please, insert only one number in each cell.");
    }

    if(val1.isEmpty() || val2.isEmpty() || val3.isEmpty() || val4.isEmpty()){
        QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is an empty cell.");
        mBox = 1;
    }

    if(mBox == 0){
    if(!val1[0].isDigit() || !val2[0].isDigit() || !val3[0].isDigit() || !val4[0].isDigit()){
        QMessageBox::warning(this,"Window size set up:", "Ops! You need to insert only numbers in the cells, not letters or other symbols");
    }}else {
    mBox= 1;
    }



    if(val1_2.size()>1 || val2_2.size()>1 || val3_2.size()>1 || val4_2.size()>1){
        QMessageBox::warning(this,"Window size set up:", "Please, insert only one number in each cell.");
    }

    if(val1_2.isEmpty() || val2_2.isEmpty() || val3_2.isEmpty() || val4_2.isEmpty()){
        QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is an empty cell.");
        mBox2 = 1;
    }

    if(mBox == 0){
    if(!val1_2[0].isDigit() || !val2_2[0].isDigit() || !val3_2[0].isDigit() || !val4_2[0].isDigit()){
        QMessageBox::warning(this,"Window size set up:", "Ops! You need to insert only numbers in the cells, not letters or other symbols");
    }}else {
    mBox2= 1;
    }


    startTime= val1 + val2 + " : " + val3 + val4;
    endTime= val1_2 + val2_2 + " : " + val3_2 + val4_2;


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



