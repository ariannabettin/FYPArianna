#include "beforeafter.h"


BeforeAfter::BeforeAfter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BeforeAfter)
{
    ui->setupUi(this);
    ui->statement->setText(" ");
    int counter = 0;

    if(themeColor == "white"){

        ui->closeButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->list->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->closeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");
        ui->list->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");

    }


    QFont f( "Arial",8);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            if(toReschedule[0] == " "){
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                counter++;
            }else{
                if(line[i] != toReschedule[0] && line[i] != toReschedule[2] && line[i] != toReschedule[2]){
                    QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                    checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                    checkB->setCheckState(Qt::Unchecked);
                    ui->list->addItem(checkB);
                    ui->list->setFont(f);
                    counter++;
                }

            }
        }
    }
    numItems = counter;

}

BeforeAfter::~BeforeAfter()
{
    delete ui;
}


void BeforeAfter::on_doneButton_clicked()
{
    isClicked ++;
    QString steps = ui->stepsLine->text();

    for(int i=0;i<steps.size();i++){
        if (!steps[i].isDigit()){
            QMessageBox::warning(this,"Window size set up:", "Ops! You need to insert only numbers in the cells, not letters or other symbols");
        }
    }

    numChecked = 0;
    for(int i = 0; i < numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();                         // check which check boxes are checked
        if(isChecked == true){
            action[numChecked] = ui->list->item(i)->text();
            numChecked++;
        }
     }
        if(numChecked > 0){
            beforeafterAction = action[0];
        }else{
            QMessageBox::information(this,"Error:","Please, select only one action.");
        }


    if(ui->optionA->isChecked()){
            if(!steps.isEmpty()){
                QMessageBox::warning(this,"Set number of steps","you do not need to insert a number of steps");
            }
            beforeafterOpt = ui->optionA->text();
            ui->statement->setText("You have chosen: '" + beforeafterOpt + "'");
            //open the list of action and choose one
    }else if(ui->optionB->isChecked()){
            if(!steps.isEmpty()){
                QMessageBox::warning(this,"Set number of steps","you do not need to insert a number of steps");
            }
            beforeafterOpt = ui->optionB->text();
            ui->statement->setText("You have chosen: '" + beforeafterOpt + "'");
            //open the list of action and choose one
    }else if(ui->optionC->isChecked()){
            if(steps.isEmpty()){
                 QMessageBox::warning(this,"Set number of steps","Ops! It looks like you have not inserted the number of steps");
            }
            beforeafterOpt = ui->optionC->text();
             ui->statement->setText("'" + beforeafterOpt + "' and " + steps + " steps.");
    }else if(ui->optionD->isChecked()){
            if(steps.isEmpty()){
                 QMessageBox::warning(this,"Set number of steps","Ops! It looks like you have not inserted the number of steps");
            }
            beforeafterOpt = ui->optionD->text();
            ui->statement->setText("'" + beforeafterOpt + "' and " + steps + " steps.");
    }else{
         QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }
}


void BeforeAfter::on_closeButton_clicked()
{
    if(isClicked > 0){
        windowORAct = "action";
        this->hide();
    }else{
        QMessageBox::warning(this,"Check data: ", "Please, click button 'Done' to check if you have inserted the right data.");
    }

}
