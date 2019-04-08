#include "window.h"

/*Window which gathers all the information needed for the rescheduling. This window asks for
a time window and a method which determines how the action will be executed.*/

Window::Window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);
    ui->statementLabel->setText(" ");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->closeButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #c6c3dd; color: #282827;");
        ui->groupBox->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->closeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->doneButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->groupBox_2->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");
        ui->groupBox->setStyleSheet("background-color: #dedfea; color: #3E4C5E;");

    }

}

Window::~Window()
{
    delete ui;
}

//Button which displays choices made by the user and checks that everything has been provided correctly.
// It also saves data into the right variables.
void Window::on_doneButton_clicked()
{
     //variable which gets value graeter than 0 when the button is clicked. Prevent the program from crashing.
    isClicked++;

    //Code which stores values inserted for the time-window.
    /*In order to be valid, the user needs to insert numbers and fill every available cell.*/
    QString val1 = ui->lW1->text();
    QString val2 = ui->lW2->text();

    QString val1_2 = ui->lW1_2->text();
    QString val2_2 = ui->lW2_2->text();


    if((val1.isEmpty() || val2.isEmpty() || val1_2.isEmpty() || val2_2.isEmpty())||(!val1[0].isDigit() || !val2[0].isDigit() || !val1_2[0].isDigit() || !val2_2[0].isDigit())){
        QMessageBox::warning(this,"Window size set up:", "Ops! It looks like there is an empty cell or that you inserted letters instead of numbers.");
    }else{
        startTime= val1 + " : " + val2;
        endTime= val1_2 + " : " + val2_2;

        //If the user has chosen one of the available options, it means that every data has been provided.
        if(ui->optionA->isChecked()){
            windowOpt =  ui->optionA->text();
        }else if(ui->optionB->isChecked()){
            windowOpt =  ui->optionB->text();
        }else if(ui->optionC->isChecked()){
            windowOpt =  ui->optionC->text();
        }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
        }

        //label which informs the user about the choice made
        ui->statementLabel->setText("Window time chosen: " + startTime + " - " + endTime);

    }
}
//Button which saves the method of rescheduling chosen by the user and confirms data provided.
void Window::on_closeButton_clicked()
{
    //Checks if the "Done" button has been clicked
    if(isClicked > 0){
        windowORAct = "window";
       this->hide();
    }else{
        QMessageBox::warning(this,"Check data: ", "Please, click button 'Done' to check if you have inserted the right data.");
    }

}
