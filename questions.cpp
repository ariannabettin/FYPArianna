#include "questions.h"
#include "ui_questions.h"
#include <QMessageBox>
#include <QFile>
#include "gloabal.h"
#include <QListWidgetItem>
#include <QTextStream>

Questions::Questions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Questions)
{
    ui->setupUi(this);
}

Questions::~Questions()
{
    delete ui;
}

void Questions::on_homeButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Questions::on_selectButton_clicked()
{
    QWidget *parent = this->parentWidget()->parentWidget();
    parent->show();
     this->hide();
}

void Questions::on_visualiseButton_clicked()
{
    QWidget *parent = this->parentWidget();
    parent->show();
     this->hide();
}

void Questions::on_choiceButton_clicked()
{
    QString quest;

    if(ui->addOption->isChecked()){
           quest = ui->addOption->text();
           QStringList list = quest.split(QRegExp("\\s+"), QString::SkipEmptyParts);
           ui->question_label->setText(list[0]);
           ui->question_label1->setText(list[2] + " " + list[2] + " " + list[3]+ " " + list[4] + " " + list[5]+ " " + list[6]+ " " + list[7]);

    }else if(ui->removeOption->isChecked()){
            QMessageBox::information(this,"a","Remove");
    }else if(ui->replaceOption->isChecked()){
            QMessageBox::information(this,"a","Replace");
    }else if(ui->windowOption->isChecked()){
    QMessageBox::information(this,"a","Reschedule1");
    }else if(ui->actionOption->isChecked()){
    QMessageBox::information(this,"a","Reschedule2");
    }else if(ui->actionOption2->isChecked()){
    QMessageBox::information(this,"a","Reschedule3");
    }else{
            QMessageBox::warning(this,"Window options:", "Please, select one of the options available");
    }
}



void Questions::on_doneButton_clicked()
{
    QMessageBox::information(this,"a","a");
}
