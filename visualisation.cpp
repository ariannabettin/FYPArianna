#include "visualisation.h"
#include "ui_visualisation.h"
#include "gloabal.h"
#include "modification.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "accessfile.h"

Visualisation::Visualisation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Visualisation)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->planArea->setText(Plan);

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


}

Visualisation::~Visualisation()
{
    delete ui;
}

void Visualisation::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();                     // goes back to the home window
    parent->show();
     this->hide();
}

void Visualisation::on_selectButton_clicked()
{
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


void Visualisation::on_valButton_clicked()
{
    //Plan validated thanks to an external validator
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
