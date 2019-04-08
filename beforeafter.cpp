#include "beforeafter.h"

/*Window which gathers all the information needed for the rescheduling. This window asks for
a parameter action and a method which determines how the action will be executed.*/

BeforeAfter::BeforeAfter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BeforeAfter)
{
    ui->setupUi(this);
    ui->statement->setText(" ");
    int counter = 0;

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
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

    /*Code which displays all the actions that can be chosen as "parameter action".
    START ->*/
    QFont f( "Arial",8);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            if(toReschedule[0] == " "){
                /* Code which addes check boxes dynamically. Taken from:
                 * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
                 Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.

                ! I have used this piece of code quite often during the implmentation of this window. Please refer to this citation
                when you read the following number: [1]*/
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                counter++;
            }else{
                if(line[i] != toReschedule[0] && line[i] != toReschedule[2] && line[i] != toReschedule[2]){
                    //[1]
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
    //<- END.
    numItems = counter;

}

BeforeAfter::~BeforeAfter()
{
    delete ui;
}

//Button which displays choices made by the user and checks that everything has been provided correctly.
// It also saves data into the right variables.
void BeforeAfter::on_doneButton_clicked()
{
    //variable which gets value graeter than 0 when the button is clicked. Prevent the program from crashing.
    isClicked ++;

    /*The string "steps" stores the number of steps that should distanciate the rescheduled action
    from the parameter action. The following piece of code, cheks if the value inserted by the user is
    an actual didgit an warns the user if */
    QString steps = ui->stepsLine->text();
    for(int i=0;i<steps.size();i++){
        if (!steps[i].isDigit()){
            QMessageBox::warning(this,"Window size set up:", "Ops! You need to insert only numbers in the cells, not letters or other symbols");
        }
    }

    /*The following loop and if statement check if the user has selected a single "parameter
    action". If the wrong number of actions has been selected a Message Box which warns the user
    is created.*/
    numChecked = 0;
    for(int i = 0; i < numItems; i++){
        bool isChecked = ui->list->item(i)->checkState();                         // check which check boxes are checked
        if(isChecked == true){
            action[numChecked] = ui->list->item(i)->text();
            numChecked++;
        }
     }
    /*The first two options do not need a number of steps, therefore if a user inserts it a
    Message BOx will inform him about the error. Viceversa, the last two options availble need to
    have a number of steps. If the user forgots it, a Message Box will be created.
    If the user forgots to select one of the options available, he will be warned.*/
    if(numChecked > 0 && numChecked<2){
            beforeafterAction = action[0];
        }else{
            QMessageBox::information(this,"Error:","Please, select one action.");
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

//Button which saves the method of rescheduling chosen by the user and confirms data provided.
void BeforeAfter::on_closeButton_clicked()
{
     //Checks if the "Done" button has been clicked
    if(isClicked > 0){
        windowORAct = "action";
        this->hide();
    }else{
        QMessageBox::warning(this,"Check data: ", "Please, click button 'Done' to check if you have inserted the right data.");
    }

}
