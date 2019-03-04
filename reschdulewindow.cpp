#include "reschdulewindow.h"
#include "ui_reschdulewindow.h"
#include "gloabal.h"
#include <QMessageBox>

reschduleWindow::reschduleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reschduleWindow)
{
    ui->setupUi(this);

    QPixmap pixmap1("doneIcon.png");
    QIcon ButtonIcon1(pixmap1);
    ui->doneButton->setIcon(ButtonIcon1);
    ui->doneButton->setIconSize(QSize(35, 45));
}

reschduleWindow::~reschduleWindow()
{
    delete ui;
}



void reschduleWindow::on_doneButton_clicked()
{
    // set time window
     compareButtonName = "Window";

     QString val1 = ui->lW1->text();
     QString val2 = ui->lW2->text();

     QString val1_2 = ui->lW1_2->text();
     QString val2_2 = ui->lW2_2->text();


     //check option

     if(ui->optionA->isChecked() || ui->optionB->isChecked() || ui->optionC->isChecked()){

            if((val1.isEmpty() || val2.isEmpty() || val1_2.isEmpty() || val2_2.isEmpty()) || (!val1[0].isDigit() || !val2[0].isDigit() || !val1_2[0].isDigit() || !val2_2[0].isDigit())){
                 QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is something wrong in the data regarding the window. It could be either you left an empty cell or you inserted a letter instead of a number,");
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

                 Plan2 = Plan + "\n" + startTime + "\n" + endTime;
                 compare = new Comparison(this);
                 compare->show();
                 this->hide();
            }

     }
}

void reschduleWindow::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

void reschduleWindow::on_selectButton_clicked()
{
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
