#include "visualisation.h"


Visualisation::Visualisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Visualisation)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    this->setFixedSize(800,600);
    ui->planArea->setText(Plan);

    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->selectButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->visualiseButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");

    QPixmap pixmap1("QMIcon.jpg");
    QIcon ButtonIcon1(pixmap1);
    ui->questionButton->setIcon(ButtonIcon1);
    ui->questionButton->setIconSize(QSize(65, 65));

    QPixmap pixmap2("editIcon.png");
    QIcon ButtonIcon2(pixmap2);
    ui->modifyButton->setIcon(ButtonIcon2);
    ui->modifyButton->setIconSize(QSize(65, 65));

    QPixmap pixmap3("fileIcon.png");
    QIcon ButtonIcon3(pixmap3);
    ui->accessFile->setIcon(ButtonIcon3);
    ui->accessFile->setIconSize(QSize(65, 65));

    QPixmap pixmap4("reloadIcon.png");
    QIcon ButtonIcon4(pixmap4);
    ui->reloadButton->setIcon(ButtonIcon4);
    ui->reloadButton->setIconSize(QSize(35, 35));

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


void Visualisation::on_homeButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget()->parentWidget();                     // goes back to the home window
    parent->show();
     this->hide();
}


void Visualisation::on_selectButton_clicked()
{
    numItems = 0;
    QWidget *parent = this->parentWidget();                                     // goes back to the select button
    parent->show();
     this->hide();
}


void Visualisation::on_modifyButton_clicked()                                   // goes to the modification window
{
    modify = new Modification(this);
    modify->show();
    this->hide();
}


void Visualisation::on_questionButton_clicked()                                  //goes to the user question window
{
    question = new UserQuestions(this);
    question->show();
    this->hide();
}


void Visualisation::on_accessFile_clicked()
{
    access = new Access(this);
    access->show();
    this->hide();
}


void Visualisation::on_reloadButton_clicked()
{
    ui->planArea->setText(Plan);

}


void Visualisation::on_backButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}


void Visualisation::on_valButton_clicked()
{
    //Plan validated thanks to an external validator
}
