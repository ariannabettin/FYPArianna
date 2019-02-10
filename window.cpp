#include "window.h"
#include "ui_window.h"
#include <QButtonGroup>
#include <QMessageBox>

Window::Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
}

Window::~Window()
{
    delete ui;
}

void Window::on_doneButton_clicked()
{
    int mBox= 0;
    QString val1 = ui->lW1->text();
    QString val2 = ui->lW2->text();
    QString val3 = ui->lW3->text();
    QString val4 = ui->lW4->text();

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


    if(ui->optionA->isChecked()){
            QMessageBox::information(this,"a","optionA");
    }else if(ui->optionB->isChecked()){
            QMessageBox::information(this,"a","optionB");
    }else if(ui->optionB->isChecked()){
            QMessageBox::information(this,"a","optionC");
    }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }
}



