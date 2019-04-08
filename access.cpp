#include "access.h"

/*Access creates a window which allows the user to see and modify the content of the source
files, which have been previously loaded by the user.*/

Access::Access(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Access)
{
    ui->setupUi(this);
    this->setFixedSize(800,600);

    //set red colour for components of the tracking bar in the left corner of the window
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selecyButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->accessButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/

    if(themeColor == "white"){

        ui->problemButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->domainButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

         ui->frame->setStyleSheet("background-color: #c6c3dd; color: #282827;");

    }else if(themeColor == "black"){

        ui->domainButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->problemButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->frame->setStyleSheet("background-color: #6b7a8c; color: #FFFFFF;");

    }
}

Access::~Access()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void Access::on_homeButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the Select window.
void Access::on_selecyButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
    this->hide();
}

//Tracking bar component which links the current window with the Visualise window.
void Access::on_visualiseButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}

//Button which links the current window with the previous window, in this case Visualise Window.
void Access::on_backButton_clicked()
{
    // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();

}

/*Button which opens the fileClass window and allows the user to see and modify the content of
the domain file. The user can also replace the loaded file with the modified one.*/
void Access::on_domainButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [2] */
    file  = new fileClass(this);
    file->show();

}

/*Button which opens the fileClassPF window and allows the user to see and modify the content of
the problem file. The user can also replace the loaded file with the modified one.*/
void Access::on_problemButton_clicked()
{
    //[2]
    PFfile = new fileclassPF(this);
    PFfile->show();
}



