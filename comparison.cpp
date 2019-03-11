#include "comparison.h"
#include "ui_comparison.h"
#include "gloabal.h"
#include <QMessageBox>

Comparison::Comparison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comparison)
{
    ui->setupUi(this);
    ui->title_label->setText(plans[id]);
    ui->title_label2->setText(plans[id]+" 2");
    ui->planArea->setText(Plan);                                               // displays the old and the new plan
    ui->planArea_2->setText(Plan2);
    ui->instruction->setText("Please, save the plan if you want to keep working on it after the modification.");
    ui->Button->setText(compareButtonName);

    if(route == 1){
        ui->modifyButton->setText("Questions");
    }


    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    if (newPlan.size() > originalPlan.size()){
        int diff = newPlan.size()-originalPlan.size();
        for(int i = 0; i<diff; i++){
            Plan = Plan + "\n";
        }
        QStringList originalPlan = Plan.split("\n");
    }else {
        int diff = originalPlan.size()-newPlan.size();
        for(int i = 0; i<diff; i++){
            Plan2 = Plan2 + "\n";
        }
        QStringList newPlan = Plan2.split("\n");
    }
}

Comparison::~Comparison()
{
    delete ui;
}

void Comparison::on_saveButton_clicked()    //saves the new plan and deletes the previous one
{
    if(isValid == true){
        Plan = Plan2;
        plansContent[id] = Plan2;
        Plan2 = " ";

    }else{
        QMessageBox::warning(this,"Error:","You can't save this plan because it is invalid.");
    }
    ui->planArea->setText(Plan);
    ui->planArea_2->clear();


}

void Comparison::on_homeButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    if(route == 1){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else if(route == 2){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else{
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }
    this->hide();

}

void Comparison::on_selectButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    if(route == 1){
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }else if(route == 2){
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }else{
       QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
       parent->show();
    }


    this->hide();
}

void Comparison::on_visualiseButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    if(route == 1){
        QWidget *parent = this->parentWidget()->parentWidget();
        parent->show();
    }else if(route == 2){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else{
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }
     this->hide();
}

void Comparison::on_modifyButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    if(route == 1){
        QWidget *parent = this->parentWidget();
        parent->show();
    }else if(route == 2){
        QWidget *parent = this->parentWidget()->parentWidget()->parentWidget()->parentWidget();
        parent->show();
    }else{
        QWidget *parent = this->parentWidget()->parentWidget();
        parent->show();
    }
    this->hide();
}



void Comparison::on_Button_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    Plan2 = " ";
    QWidget *parent = this->parentWidget();
    parent->show();
    this->hide();
}

void Comparison::on_valButton_clicked()
{
    ui->planArea->clear();
    ui->planArea_2->clear();
    valid = new validPlan(this);
    valid->show();
        this->hide();
}


void Comparison::on_noChangesButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    if (originalPlan.size() == newPlan.size()){
        for(int i = 0; i<newPlan.size(); i++){
            if(newPlan[i] == originalPlan[i]){
                 QTextBlockFormat f;
                 f.setBackground(QColor(136, 167, 216));
                 if(!newPlan[i].isEmpty()){
                     cur2.select(QTextCursor::LineUnderCursor);
                     cur2.setBlockFormat(f);
                 }else{
                     //cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                 }
                 if(!originalPlan[i].isEmpty()){
                     cur.select(QTextCursor::LineUnderCursor);
                     cur.setBlockFormat(f);
                 }else{
                     cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                 }
            }else{
                if(newPlan[i] == originalPlan[i-1]){
                    QTextBlockFormat f;
                    cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                    f.setBackground(QColor(136, 167, 216));
                    cur.select(QTextCursor::LineUnderCursor);
                    cur.setBlockFormat(f);
                    cur2.select(QTextCursor::LineUnderCursor);
                    cur2.setBlockFormat(f);
                    cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);

                }else if(newPlan[i-1] == originalPlan[i]){
                    QTextBlockFormat f;
                    cur2.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                    f.setBackground(QColor(136, 167, 216));
                    cur.select(QTextCursor::LineUnderCursor);
                    cur.setBlockFormat(f);
                    cur2.select(QTextCursor::LineUnderCursor);
                    cur2.setBlockFormat(f);
                    cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);

                }
            }
            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        }

    }else{
        QMessageBox::information(this, "Error:","Probably something went wrong. Please try again!");
    }


}

void Comparison::on_newsButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    int next = 0;
    for(int i = 0; i<newPlan.size()-1; i++){
        if(newPlan[i] != originalPlan[i+next]) {
                    if(newPlan[i] != originalPlan[i-1] && newPlan[i] != originalPlan[i+1]){
                     QTextBlockFormat f;
                     f.setBackground(QColor(216, 135, 165));
                     if(!newPlan[i].isEmpty()){
                         cur2.select(QTextCursor::LineUnderCursor);
                         cur2.setBlockFormat(f);
                     }
                     if(newPlan[i] == originalPlan[i+1]){
                         QMessageBox::information(this,"a",newPlan[i]);
                         next++;
                     }
                    }


                }
        cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
    }

 }




void Comparison::on_replacedButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    for(int i = 0; i<newPlan.size(); i++){
        if(newPlan[i] != originalPlan[i]){
            if(i+1 != newPlan.size() || i-1 < 0){
                if(originalPlan[i+1] == newPlan[i+1] && originalPlan[i-1] == newPlan[i-1]){
                     QTextBlockFormat f;
                     f.setBackground(QColor(103, 206, 182));
                     if(!newPlan[i].isEmpty() && !originalPlan[i].isEmpty()){
                         cur.select(QTextCursor::LineUnderCursor);
                         cur.setBlockFormat(f);
                         cur2.select(QTextCursor::LineUnderCursor);
                         cur2.setBlockFormat(f);
                     }
                }
            }else if (i+1 == newPlan.size()){
                if(originalPlan[i-1] == newPlan[i-1] && (!originalPlan[i].isEmpty() || !newPlan[i].isEmpty())){
                    QTextBlockFormat f;
                    f.setBackground(QColor(216, 135, 165));
                    cur2.select(QTextCursor::LineUnderCursor);
                    cur2.setBlockFormat(f);
                }
            }
       }
        cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
    }
}


void Comparison::on_removedButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    int next = 0;
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");

    for(int i = 0; i<newPlan.size()-1; i++){
        if(newPlan[i-next] != originalPlan[i]) {
            if(originalPlan[i+1] == newPlan[i-next]){
                    QTextBlockFormat f;
                    f.setBackground(QColor(216, 135, 165));
                    cur.select(QTextCursor::LineUnderCursor);
                    cur.setBlockFormat(f);
                    next++;
            }
        }
        cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
    }

}
