#include "reschdulebeforeafter.h"

/*rescheduleBeforeAfter window is part of the path created for users with less knowledge in planning.
 This window allows the user to choose a "parameter action" and to select if the action to reschedule
 should be executed before or after that action.*/

reschduleBeforeAfter::reschduleBeforeAfter(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reschduleBeforeAfter)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
     ui->doneButton->setStyleSheet("background-color:#235d5e; color: #FFFFFF");

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->Button->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->BAButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->frame_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->list_2->setStyleSheet("background-color: #eae8f4; color: #282827;");

    }else if(themeColor == "black"){

        ui->frame->setStyleSheet("background-color: #548da5; color: #000000;");
        ui->frame_2->setStyleSheet("background-color: #548da5; color: #000000;");
        ui->list_2->setStyleSheet("background-color: #bfd2f2; color: #3E4C5E;");

    }

    /*Code which displays the list of actions implemented in the domain file which will work
    as "parameter action" for the action to reschedule.
    START ->*/
    QFont f( "Arial",4);
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty()){
            if(line[i] != toAdd[0]){
                /* Code which addes check boxes dynamically. Taken from:
                 * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
                 Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.*/
                QListWidgetItem * checkB = new QListWidgetItem(line[i]);
                checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
                checkB->setCheckState(Qt::Unchecked);
                ui->list_2->addItem(checkB);
                ui->list_2->setFont(f);
                numItems = i;
            }
        }
    }
    //<- END.
    steps = " ";
}

reschduleBeforeAfter::~reschduleBeforeAfter()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void reschduleBeforeAfter::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();

}

//Tracking bar component which links the current window with the Select window.
void reschduleBeforeAfter::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void reschduleBeforeAfter::on_visualiseButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the User Question window.
void reschduleBeforeAfter::on_modifyButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the RescheduleQuestion window.
void reschduleBeforeAfter::on_Button_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}

/*Button which checks that the user had provided all the information required and which links
the current page with the Compare window.*/
void reschduleBeforeAfter::on_doneButton_clicked()
{
    //Code which recovers the "parameter action".
    for(int i = 0; i<numItems-1; i++){
       bool isChecked = ui->list_2->item(i)->checkState();
       if(isChecked == true){
            beforeafterAction = ui->list_2->item(i)->text();
        }
     }

    compareButtonName = "B & A";

    //If the user has selecetd more than 1 action to reschedule, the whole sequence will be rescheduled.
    QString A;
    if(toAdd[1].isEmpty()){
       A = toAdd[0];
    }else{
       A = "SEQUENCE";
    }

        numChecked = 0;
        for(int i = 0; i<numItems-1; i++){
            bool isChecked = ui->list_2->item(i)->checkState();
            if(isChecked == true){
                        action[numChecked] = ui->list_2->item(i)->text();
                        numChecked++;
             }
         }

        //Code which checks which options has been chosen by the user and if the correct data have been provided.
        if(numChecked>1 || numChecked < 1){
            QMessageBox::information(this,"Error:","You should select ONE action");
        }else if(ui->optionD_2->isChecked() || ui->optionE_2->isChecked()){
            beforeafterAction = action[0];
            if(ui->optionD_2->isChecked()){
                beforeafterOpt = "before";
            }else if (ui->optionE_2) {
                beforeafterOpt = "after";
            }
            if (steps != " "){
                 QMessageBox::information(this,"Error:","You don't need to set the number of steps.");
            }
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

            Plan2 = Plan + "\n" + "You want that: " + A + " is executed " + beforeafterOpt + " " + beforeafterAction;
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

            /*Code which opens a child window taken from:
             * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
             Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

            ! I have referred to this citation quite often during the implmentation of this window.
            Please check it when you see number: [2] */
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
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                 Plan2 = Plan + "\n" + "You want that: " + action[0] + " is executed " +  beforeafterOpt + "\n\n" + "number of steps: " + steps + "\n" + "parameter action: " + A;
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                //[2]
                 compare = new Comparison(this);
                 compare->show();
                 this->hide();
                 }
        }else{
            QMessageBox::warning(this,"Error:","You should choose one of the options available.");
        }
}

//Button which links the current window with the previous window, in this case RescheduleQuestion Window.
void reschduleBeforeAfter::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
