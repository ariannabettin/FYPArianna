#include "rescheduleaction.h"

RescheduleAction::RescheduleAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    this->setFixedSize(800,600);

    ui->reschButton->setStyleSheet("border-image:url(checkIcon.jpeg);");

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->RescheduleButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    if(themeColor == "white"){

        ui->BAButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->timeWindow->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->BAButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->timeWindow->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }

    QFont f( "Arial",8);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            if(line[i] != toAdd[0]){
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                numItems = i;
            }
        }
    }
    compareButtonName = "Reschedule";
}

RescheduleAction::~RescheduleAction()
{
    delete ui;
}


void RescheduleAction::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_modifyButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void RescheduleAction::on_timeWindow_clicked()
{
    beforeafterOpt = " ";
    beforeafterAction = " ";
    window = new Window(this);
    window->show();
}


void RescheduleAction::on_BAButton_clicked()
{
    numChecked = 0;
    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
                    action[numChecked] = ui->list->item(i)->text();
                    numChecked++;
         }
     }
    if(numChecked>0){
        for(int i = 0; i<numChecked; i++){
            toReschedule[i] = action[i];
        }
    }else{
        toReschedule[0] = " ";
    }

    windowOpt = " ";
    startTime = " ";
    endTime = " ";
    befaft= new BeforeAfter(this);
    befaft->show();
}


void RescheduleAction::on_reschButton_clicked()
{
    bool checkMsgBox = false;
    numChecked = 0;
    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
                    action[numChecked] = ui->list->item(i)->text();
                    numChecked++;
         }
     }

    if(numChecked == 0){
        checkMsgBox = true;
        QMessageBox::warning(this,"Error:","Please select an action from the list.");
    }else if(numChecked > 0 && numChecked< 4){
        if(!beforeafterAction.isEmpty()){
            if(beforeafterAction == action[0] || beforeafterAction == action[2] || beforeafterAction == action[3]){
                QMessageBox::information(this,"Error: ","You can't choose the same action that you selected as 'action parameter'. Please, choose a different one from: " + beforeafterAction + ".");
                checkMsgBox = true;
            }else{
                if(!toReschedule[1].isEmpty()){
                    toAdd[0] = "SEQUENCE";
                }else {
                    toAdd[0] = action[0];
                }

            }
        }
    }else{
        QMessageBox::warning(this,"Error:","You are allowed to reschedule maximum 3 actions at once.");
    }
    if(windowORAct == " " && checkMsgBox == false){
        QMessageBox::information(this,"Missing data:","Please choose one of the options between 'time window' or 'before-after' and instert data required");
    }//else{

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

    else if(windowORAct == "window" && checkMsgBox == false){
            windowORAct = " ";
            Plan2 = Plan + "\n"+ "to reschedule: " + toAdd[0] + "\n" + windowOpt + " [" + startTime + "][" + endTime + "]";
            compare = new Comparison(this);
            compare->show();
            this->hide();
    }else if (windowORAct == "action" && checkMsgBox == false){
            windowORAct = " ";
            Plan2 = Plan + "\n" + "to reschedule: " + toAdd[0] + "\n" + beforeafterOpt + " " + beforeafterAction + "\n" + "steps:" + steps;
            compare = new Comparison(this);
            compare->show();
            this->hide();
    }
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

    /* compare = new Comparison(this);
    compare->show();
    this->hide();
    }*/
}

void RescheduleAction::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
