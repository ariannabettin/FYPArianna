#include "reschdulewindow.h"

/*rescheduleWindow window is part of the path created for users with less knowledge in planning.
 This window allows the user to choose the rescheduling method and to set a time window during
which the action should be executed.*/

reschduleWindow::reschduleWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reschduleWindow)
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
    ui->windowButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->frame_3->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->frame->setStyleSheet("background-color: #548da5; color: #000000;");
        ui->frame_3->setStyleSheet("background-color: #548da5; color: #000000;");
    }
}

reschduleWindow::~reschduleWindow()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void reschduleWindow::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the Select window.
void reschduleWindow::on_selectButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void reschduleWindow::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the User Question window.
void reschduleWindow::on_modifyButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the RescheduleQuestion window.
void reschduleWindow::on_Button_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}

/*Button which checks that the user had provided all the information required and which links
the current page with the Compare window.*/
void reschduleWindow::on_doneButton_clicked()
{
     compareButtonName = "Window";

     //Code which gets the values set for the time-window

     QString val1 = ui->lW1->text();
     QString val2 = ui->lW2->text();

     QString val1_2 = ui->lW1_2->text();
     QString val2_2 = ui->lW2_2->text();

     //If one of the available ations has ben checked data are stored in the corresponding variable, else the user is warned.
     if(ui->optionA->isChecked() || ui->optionB->isChecked() || ui->optionC->isChecked()){

            if((val1.isEmpty() || val2.isEmpty() || val1_2.isEmpty() || val2_2.isEmpty()) || (!val1[0].isDigit() || !val2[0].isDigit() || !val1_2[0].isDigit() || !val2_2[0].isDigit())){
                 QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is something wrong in the data regarding the window. It could be either you left an empty cell or you inserted a letter instead of a number.");
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
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
//              Not part of the interface, I will use this for the presentaction
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                 Plan2 = Plan + "\n" + toAdd[0] + "\n" + "Start Time: " + startTime + "\n" + "End Time: " + endTime + "\n" + "Option Chosen: '" + windowOpt + "'";
//*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
                 /*Code which opens a child window taken from:
                  * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
                  Available at:https://www.youtube. com/watch?v=tP70B-pdTH0*/
                 compare = new Comparison(this);
                 compare->show();
                 this->hide();
            }

     }else{
          QMessageBox::warning(this,"Error:","You should choose one of the options available.");
     }
}

//Button which links the current window with the previous window, in this case RescheduleQuestion Window.
void reschduleWindow::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}
