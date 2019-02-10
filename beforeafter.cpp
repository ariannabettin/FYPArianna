#include "beforeafter.h"
#include "ui_beforeafter.h"
#include <QMessageBox>

BeforeAfter::BeforeAfter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BeforeAfter)
{
    ui->setupUi(this);
}

BeforeAfter::~BeforeAfter()
{
    delete ui;
}

void BeforeAfter::on_doneButton_clicked()
{
    QString steps = ui->stepsLine->text();

    for(int i=0;i<steps.size();i++){
        if (!steps[i].isDigit()){
            QMessageBox::warning(this,"Window size set up:", "Ops! You need to insert only numbers in the cells, not letters or other symbols");
        }
    }

    if(ui->optionA->isChecked()){
            if(!steps.isEmpty()){
                QMessageBox::warning(this,"Set number of steps","you do not need to insert a number of steps");
            }
            QMessageBox::information(this,"a","optionA");
            //open the list of action and choose one
    }else if(ui->optionB->isChecked()){
            if(!steps.isEmpty()){
                QMessageBox::warning(this,"Set number of steps","you do not need to insert a number of steps");
            }
            QMessageBox::information(this,"a","optionB");
            //open the list of action and choose one
    }else if(ui->optionC->isChecked()){
            if(steps.isEmpty()){
                 QMessageBox::warning(this,"Set number of steps","Ops! It looks like you have not inserted the number of steps");
            }
            QMessageBox::information(this,"a","optionC");
    }else if(ui->optionD->isChecked()){
            if(steps.isEmpty()){
                 QMessageBox::warning(this,"Set number of steps","Ops! It looks like you have not inserted the number of steps");
            }
            QMessageBox::information(this,"a","optionD");
    }else{
         QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }
}
