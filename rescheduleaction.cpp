#include "rescheduleaction.h"

/*RescheduleAction window is part of the path for experienced users. It allows the user to reschedule
an action chosing the method and setting the parameters. In this window are available the same operations that
can be performed in rescheduleBeforeAfter, rescheduleWindow and rescheduleQuestion.*/

RescheduleAction::RescheduleAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RescheduleAction)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);
    this->setFixedSize(800,600);

     ui->reschButton->setStyleSheet("background-color:#235d5e; color: #FFFFFF");

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->RescheduleButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
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
    /*Code which lists all the actions that the user can reschedule in a text edit.
    START ->*/
    QFont f( "Arial",8);
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
                ui->list->addItem(checkB);
                ui->list->setFont(f);
                numItems = i;
            }
        }
    }
    //<- END.
    compareButtonName = "Reschedule";
}

RescheduleAction::~RescheduleAction()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void RescheduleAction::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void RescheduleAction::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void RescheduleAction::on_visualiseButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Modify window.
void RescheduleAction::on_modifyButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

/*Button which opens a pop up window that gather the information required by the rescheduling
 based on the time window.*/
void RescheduleAction::on_timeWindow_clicked()
{
    //If timeWindow is clicked, variable for the BeforeAfter method are cleared.
    beforeafterOpt = " ";
    beforeafterAction = " ";
    //[2]
    window = new Window(this);
    window->show();
}

/*Button which opens a pop up window that gather the information required by the rescheduling
 based on a parameter action.*/
void RescheduleAction::on_BAButton_clicked()
{
    //If BAButton is clicked, variable for the timeWindow method are cleared.
    numChecked = 0;
    for(int i = 0; i<numItems-1; i++){
        bool isChecked = ui->list->item(i)->checkState();
        if(isChecked == true){
                    action[numChecked] = ui->list->item(i)->text();
                    numChecked++;
         }
     }

        if(numChecked == 0){
            toReschedule[0] = " ";
        }else {
            for(int i = 0; i<numChecked; i++){
                toReschedule[i] = action[i];
        }
        windowOpt = " ";
        startTime = " ";
        endTime = " ";
        //[2]
        befaft= new BeforeAfter(this);
        befaft->show();
}


}

/*Button which checks that the user had provided all the information required and which links
the current page with the Compare window.*/
void RescheduleAction::on_reschButton_clicked()
{
    bool notOpen = false;
    /*The user has to provide all the required data for the chosen rechdule method. The following
    code informs the user if something went wrong.
    If everything worked fine, data are sent to the planner and Compare Window is opened*/
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

        /*Checks if the user has chosen the same action for the rescheduling and as "parameter action"
         If it does, the user is warned. Otherwise the program stores the data in the designed variable.*/
        if(!beforeafterAction.isEmpty()){
            if(beforeafterAction == action[0] || beforeafterAction == action[1] || beforeafterAction == action[2]){
                QMessageBox::information(this,"Error: ","You can't choose the same action that you selected as 'action parameter'. Please, choose a different one from: " + beforeafterAction + ".");
                checkMsgBox = true;
            }else{
                if(numChecked != 1){
                    toAdd[0] = "SEQUENCE";
                }else{
                    toAdd[0] = action[0];
                }
            }
        }
    }else{
        QMessageBox::warning(this,"Error:","You are allowed to reschedule maximum 3 actions at once.");
        notOpen = true;
    }
    if(windowORAct == " " && checkMsgBox == false){
        QMessageBox::information(this,"Missing data:","Please choose one of the options between 'time window' or 'before-after' and instert data required");
    }//else{

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

    else if(windowORAct == "window" && checkMsgBox == false && !notOpen){
            windowORAct = " ";
            Plan2 = Plan + "\n"+ "to reschedule: " + toAdd[0] + "\n" + windowOpt + " [" + startTime + "][" + endTime + "]";
            /*Code which opens a child window taken from:
             * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
             Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

            ! I have referred to this citation quite often during the implmentation of this window.
            Please check it when you see number: [2] */
            compare = new Comparison(this);
            compare->show();
            this->hide();
    }else if (windowORAct == "action" && checkMsgBox == false && !notOpen){
            windowORAct = " ";
            Plan2 = Plan + "\n" + "to reschedule: " + toAdd[0] + "\n" + beforeafterOpt + " " + beforeafterAction + "\n" + "steps:" + steps;
            //[2]
            compare = new Comparison(this);
            compare->show();
            this->hide();
    }
 //*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

     //The commented code should be enabled when the interface will be integrated with ROSPlan.
    /*//[2]
    if(!notOpen){
        compare = new Comparison(this);
        compare->show();
        this->hide();
    }
    }*/

}

//Button which links the current window with the previous window, in this case Modify Window.
void RescheduleAction::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
