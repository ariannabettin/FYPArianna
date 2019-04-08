#include "visualisation.h"

/*This window displays the plan in an text area and offers three options to the user:
    - ask a question;
    - modify the plan;
    - access the source files.*/

Visualisation::Visualisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Visualisation)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    this->setFixedSize(800,600);
    ui->planArea->setText(Plan);

    //set red colour for components of the tracking bar in the left corner of the window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    //Question mark icon assigned to the questionButton
    QPixmap pixmap1("QMIcon.jpg");
    QIcon ButtonIcon1(pixmap1);
    ui->questionButton->setIcon(ButtonIcon1);
    ui->questionButton->setIconSize(QSize(65, 65));

    //Edit icon assigned to the modifyButton
    QPixmap pixmap2("editIcon.png");
    QIcon ButtonIcon2(pixmap2);
    ui->modifyButton->setIcon(ButtonIcon2);
    ui->modifyButton->setIconSize(QSize(65, 65));

    //File icon assigned to the accessFile button
    QPixmap pixmap3("fileIcon.png");
    QIcon ButtonIcon3(pixmap3);
    ui->accessFile->setIcon(ButtonIcon3);
    ui->accessFile->setIconSize(QSize(65, 65));

    //Reload action assigned to reload button
    QPixmap pixmap4("reloadIcon.png");
    QIcon ButtonIcon4(pixmap4);
    ui->reloadButton->setIcon(ButtonIcon4);
    ui->reloadButton->setIconSize(QSize(35, 35));

    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/
    if(themeColor == "white"){

        ui->modifyButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
        ui->questionButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->accessFile->setStyleSheet("background-color: #25245e; color: #FFFFFF");
        ui->reloadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");


    }else if(themeColor == "black"){


        ui->modifyButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
        ui->questionButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->accessFile->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
        ui->reloadButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

        ui->planArea->setStyleSheet("background-color: #dedfea; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
    }

}

Visualisation::~Visualisation()
{
    delete ui;
}

//Tracking bar component which links the current window with the Home window.
void Visualisation::on_homeButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

//Tracking bar component which links the current window with the Select window.
void Visualisation::on_selectButton_clicked()
{
    numItems = 0;
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

//Button which opens Modify window
void Visualisation::on_modifyButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0

    ! I have referred to this citation quite often during the implmentation of this window.
    Please check it when you see number: [2] */
    modify = new Modification(this);
    modify->show();
    this->hide();
}

//Button which opens User Question window
void Visualisation::on_questionButton_clicked()
{
    //[2]
    question = new UserQuestions(this);
    question->show();
    this->hide();
}

//Button which opens Access Window window
void Visualisation::on_accessFile_clicked()
{
    //[2]
    access = new Access(this);
    access->show();
    this->hide();
}

//Button which updates the content of the text area and therefore the plan displayed.
void Visualisation::on_reloadButton_clicked()
{
    ui->planArea->setText(Plan);

}

//Button which links the current window with the previous window, in this case Select Window.
void Visualisation::on_backButton_clicked()
{
     // [*]
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


