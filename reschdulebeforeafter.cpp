#include "reschdulebeforeafter.h"
#include "ui_reschdulebeforeafter.h"
#include "gloabal.h"
#include <QMessageBox>

reschduleBeforeAfter::reschduleBeforeAfter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reschduleBeforeAfter)
{
    ui->setupUi(this);

    QPixmap pixmap1("doneIcon.png");
    QIcon ButtonIcon1(pixmap1);
    ui->doneButton->setIcon(ButtonIcon1);
    ui->doneButton->setIconSize(QSize(35, 45));
}

reschduleBeforeAfter::~reschduleBeforeAfter()
{
    delete ui;
}


void reschduleBeforeAfter::on_listButton_2_clicked()
{
    //select B
    isClicked ++;

    ui->list_2->clear();
    ui->list_2->addItem("B:");
    QFont f( "Arial",8);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        QListWidgetItem * checkB = new QListWidgetItem(line[i]);
        checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
        checkB->setCheckState(Qt::Unchecked);
        ui->list_2->addItem(checkB);
        ui->list_2->setFont(f);
        numItems = i;
    }
    for(int i = 0; i<numItems-1; i++){
       bool isChecked = ui->list_2->item(i)->checkState();
       if(isChecked == true){
            beforeafterAction = ui->list_2->item(i)->text();
        }
    }

}


void reschduleBeforeAfter::on_doneButton_clicked()
{
    compareButtonName = "B & A";

    if(isClicked > 0){

        numChecked = 0;
        for(int i = 0; i<numItems-1; i++){
            bool isChecked = ui->list_2->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list_2->item(i)->text();
                        numChecked++;
             }
         }
      //check if list is empty and set j == 0
        if(numChecked>1 || numChecked < 1){
            QMessageBox::information(this,"Error:","You should select 1 action");
        }else if(ui->optionD_2->isChecked() || ui->optionE_2->isChecked()){

            beforeafterAction = action[0];

            if(ui->optionD_2->isChecked()){
                beforeafterOpt = "before";
            }else if (ui->optionE_2) {
                beforeafterOpt = "after";
            }

            Plan2 = Plan + "\n" + beforeafterAction + "\n" + beforeafterOpt;
            compare = new Comparison(this);
            compare->show();
            this->hide();

        }else if(ui->optionF_2->isChecked() || ui->optionG_2->isChecked()){
            steps = ui->stepsLine_2->text();
            if (steps.isEmpty()){
                 QMessageBox::information(this,"Error:","You should insert the number of steps.");
            }else{
                beforeafterAction = action[0];
                 if(ui->optionF_2->isChecked()){
                     beforeafterOpt = "before n steps";
                 }else if (ui->optionG_2) {
                     beforeafterOpt = "after n steps";
                 }
                 Plan2 = Plan + "\n" + beforeafterAction + "\n" + steps + "\n" +beforeafterOpt;
                 compare = new Comparison(this);
                 compare->show();
                 this->hide();
                 }
        }
    }else{
        QMessageBox::warning(this,"Error","You need to list the actions in your domain file first.");
    }
}

void reschduleBeforeAfter::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();

}

void reschduleBeforeAfter::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void reschduleBeforeAfter::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void reschduleBeforeAfter::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void reschduleBeforeAfter::on_Button_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}

