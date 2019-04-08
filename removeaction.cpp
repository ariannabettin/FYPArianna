#include "removeaction.h"

/*Remove allows the user to select an action from the plan, executed at a specific time, which
 will be not considered by the planner anymore.*/

RemoveAction::RemoveAction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveAction)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);
    ui->title_label->setText(plans[id]);

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->modifyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->removeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->removeFileButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->removePlanButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    }else if(themeColor == "black"){

        ui->removePlanButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->removeFileButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");

    }
    /*Code which displays the plan in the text area. Every action is displayed with its execution time
     and a check box.
     START ->*/
    int counter = 0;
    QStringList line = Plan.split("\n");
    for(int i = 0; i<line.size(); i++ ){
        if(!line[i].isEmpty() || line[i] == " "){
            /* Code which addes check boxes dynamically. Taken from:
             * Isira (2012). Adding list of check boxes in a single widget in Qt. [Blog] stack overflow.
             Available at: https://stackoverflow.com/questions/4066023/adding-list-of-check-boxes-in-a-single-widget-in-qt.*/
            QListWidgetItem * checkB = new QListWidgetItem(line[i]);
            checkB->setFlags(checkB->flags() | Qt::ItemIsUserCheckable);
            checkB->setCheckState(Qt::Unchecked);
            ui->planArea->addItem(checkB);
            counter ++;
        }
     }
    //<- END.
    numItems = counter;
}


RemoveAction::~RemoveAction()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void RemoveAction::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void RemoveAction::on_selectButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void RemoveAction::on_visualiseButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Modify window.
void RemoveAction::on_modifyButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

/*Button which checks the action that the user has selcted. This button checks also that the user
 has selected only one action.
If everything is correct, the Compare window is opened.*/
void RemoveAction::on_removePlanButton_clicked()
{
    /*Code which counts how many actions have been selected. If more or less than 1 action has been
     selected, the user will be warned.*/
    numChecked = 0;
    for(int i = 0; i<numItems; i++){
        bool isChecked = ui->planArea->item(i)->checkState();
        if(isChecked == true){
              action[numChecked] = ui->planArea->item(i)->text();
              numChecked++;
         }
     }

    if(numChecked>1){
        QMessageBox::information(this,"Error:","You can select only one action at once.");
    }else if(numChecked == 0){
         QMessageBox::information(this,"Error:","You should select at least one action.");
    }else if (numChecked ==1){
         toRemove = action[0];

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

         QStringList line = Plan.split("\n");
         int helper = 0;
         for(int i = 0; i<numItems; i++){
             if(ui->planArea->item(i)->text() == toRemove){
                 if(i == 0){
                    Plan2 =  ui->planArea->item(1)->text();
                    helper = 1;
                 }
             }else{
                 if(i == 0){
                     Plan2 = ui->planArea->item(0)->text();
                 }else if(i == 1){
                     if(helper == 0){
                        Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                     }
                 }else{
                     Plan2 = Plan2 + "\n" + ui->planArea->item(i)->text();
                 }
             }
        }

//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
         Plan2 = Plan2 + "\n";

        compareButtonName = "Remove";
        /*Code which opens a child window taken from:
         * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
         Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

         ! I have referred to this citation quite often during the implmentation of this window.
         Please check it when you see number: [2] */
        compare = new Comparison(this);
        compare->show();
        this->hide();
    }
}


/*Button which opens the domainFile window.
The user can remove an action from the file which will be not considered by the planner anymore.

-> if any change is applied, the new version of the domain file should be send to the planner.*/
void RemoveAction::on_removeFileButton_clicked()
{
    //[2]
    file  = new domainFile(this);
    file->show();

}

//Button which links the current window with the previous window, in this case Modify Window.
void RemoveAction::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
