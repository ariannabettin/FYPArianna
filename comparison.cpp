#include "comparison.h"
#include "ui_comparison.h"
#include "gloabal.h"
#include <QMessageBox>

Comparison::Comparison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Comparison)
{
    ui->setupUi(this);
    ui->title_label->setText("Original Plan: " + plans[id]);
    ui->title_label2->setText("New Plan: " + plans[id]+" 2");
    ui->planArea->setText(Plan);                                               // displays the old and the new plan
    ui->planArea_2->setText(Plan2);
    ui->instruction->setText("Please, save the plan if you want to keep working on it after the modification.");


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

    cNoChanges = true;
    cNews = true;
    cReplaced = true;
    cRemoved = true;
}

Comparison::~Comparison()
{
    delete ui;
}

void Comparison::on_saveButton_clicked()    //saves the new plan and deletes the previous one
{


    if(isValid == true){
        QStringList newPlan = Plan2.split("\n");
        for(int i = 0; i< newPlan.size(); i++){
            if(!newPlan[i].isEmpty()){
                if(i == 0){
                    Plan = newPlan[i];
                }else{
                    Plan = Plan + "\n" + newPlan[i];
                }
            }
        }
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
     QStringList originalPlan = Plan.split("\n");
     for(int i = 0; i< originalPlan.size(); i++){
         if(!originalPlan[i].isEmpty()){
             if(i == 0){
                 Plan = originalPlan[i];
             }else{
                 Plan = Plan + "\n" + originalPlan[i];
             }
         }
     }

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
    QStringList originalPlan = Plan.split("\n");
    for(int i = 0; i< originalPlan.size(); i++){
        if(!originalPlan[i].isEmpty() || originalPlan[i] == " "){
            if(i == 0){
                Plan = originalPlan[i];
            }else{
                Plan = Plan + "\n" + originalPlan[i];
            }
        }
    }

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
    QStringList originalPlan = Plan.split("\n");
    for(int i = 0; i< originalPlan.size(); i++){
        if(!originalPlan[i].isEmpty() || originalPlan[i] == " "){
            if(i == 0){
                Plan = originalPlan[i];
            }else{
                Plan = Plan + "\n" +  originalPlan[i];
            }
        }
    }

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
    Plan = Plan + "\n";
    Plan2 = Plan2 + "\n";
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    int changes = 0;

    if(cNoChanges){
        ui->noChangesButton->setText("Hide what has changed");
        int next = 0;
        if (originalPlan.size() == newPlan.size()){
            for(int i = 0; i<newPlan.size(); i++){
                if(newPlan[i] == originalPlan[i-next]){
                     QTextBlockFormat f;
                     f.setBackground(QColor(136, 167, 216));
                     if(!newPlan[i].isEmpty()){
                         cur2.select(QTextCursor::LineUnderCursor);
                         cur2.setBlockFormat(f);
                         changes++;
                     }
                     if(!originalPlan[i-next].isEmpty()){
                         cur.select(QTextCursor::LineUnderCursor);
                         cur.setBlockFormat(f);
                         changes++;
                     }
                }else{
                    if(i != 0){
                        if(newPlan[i] == originalPlan[i-1]){
                            QTextBlockFormat f;
                            cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            changes++;

                        }else if(newPlan[i-1] == originalPlan[i]){
                            QTextBlockFormat f;
                            cur2.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            changes++;
                        }else{
                            bool stillEqual = false;
                            for(int k = i+1; k<newPlan.size(); k++){
                                if(originalPlan[i] == newPlan[k]){
                                    stillEqual = true;
                                    next++;
                                }
                            }
                            if(stillEqual){
                                cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            }
                        }
                    }else{
                        if(newPlan[i] == originalPlan[i+1]){
                            QTextBlockFormat f;
                            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            changes++;

                        }else if(newPlan[i+1] == originalPlan[i]){
                            QTextBlockFormat f;
                            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                            f.setBackground(QColor(136, 167, 216));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            cur2.select(QTextCursor::LineUnderCursor);
                            cur2.setBlockFormat(f);
                            cur2.movePosition(QTextCursor::Up, QTextCursor::MoveAnchor);
                            changes++;
                        }
                    }
                }
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cNoChanges = false;
            }else{
                QMessageBox::information(this, "Error:","Probably something went wrong. Please try again!");
            }
    }else if(!cNoChanges){
            ui->noChangesButton->setText("What has not changed?");
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cNoChanges = true;
        }
    if(changes == 0){
        ui->noChangesButton->setText("No unchanged parts.");
    }
    changes = 0;

}




void Comparison::on_newsButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    QTextBlockFormat f;
    f.setBackground(QColor(216, 135, 165));
    int changes = 0;

    if(cNews){
            ui->newsButton->setText("Hide what is new");
            int next = 0;
            for(int i = 0; i<newPlan.size()-1; i++){

                if(newPlan[i] != originalPlan[i-next]) {
                            bool isNotReplacement = false;
                            if(newPlan[i] != originalPlan[i+1]){

                                for(int k = i+1; k<newPlan.size();k++){
                                    if(originalPlan[i] == newPlan[k]){
                                        isNotReplacement = true;
                                    }
                                }
                                if(isNotReplacement){
                                    cur2.select(QTextCursor::LineUnderCursor);
                                    cur2.setBlockFormat(f);
                                    changes++;
                                    if(i+next+1 <= newPlan.size()){
                                       next++;
                                    }
                                }

                            }
                    }

                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cNews = false;
    }else if(!cNews){
            ui->newsButton->setText("What is new?");
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cNews = true;
    }
    if(changes == 0){
        ui->newsButton->setText("No additions have been made.");
    }
    changes = 0;

 }




void Comparison::on_replacedButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    int changes = 0;

    if(cReplaced){
        ui->replacedButton->setText("Hide what has been replaced");
        for(int i = 0; i<newPlan.size(); i++){
            if(newPlan[i] != originalPlan[i]){
                if(i==0){
                    if(originalPlan[i+1] == newPlan[i+1] && (!originalPlan[i].isEmpty() || !newPlan[i].isEmpty())){
                        QTextBlockFormat f;
                        f.setBackground(QColor(103, 206, 182));
                        cur2.select(QTextCursor::LineUnderCursor);
                        cur2.setBlockFormat(f);
                        cur.select(QTextCursor::LineUnderCursor);
                        cur.setBlockFormat(f);
                        changes++;
                    }
                }else if(i+1>=newPlan.size()){
                    if(originalPlan[i-1] == newPlan[i-1] && (!originalPlan[i].isEmpty() || !newPlan[i].isEmpty())){
                        QTextBlockFormat f;
                        f.setBackground(QColor(103, 206, 182));
                        cur2.select(QTextCursor::LineUnderCursor);
                        cur2.setBlockFormat(f);
                        cur.select(QTextCursor::LineUnderCursor);
                        cur.setBlockFormat(f);
                        changes++;
                    }
                }else{
                    if(originalPlan[i+1] == newPlan[i+1] && originalPlan[i-1] == newPlan[i-1]){
                         QTextBlockFormat f;
                         f.setBackground(QColor(103, 206, 182));
                         if(!newPlan[i].isEmpty() && !originalPlan[i].isEmpty()){
                             cur.select(QTextCursor::LineUnderCursor);
                             cur.setBlockFormat(f);
                             cur2.select(QTextCursor::LineUnderCursor);
                             cur2.setBlockFormat(f);
                             changes++;
                         }
                    }
                }
            }

            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
        }

        cReplaced = false;
    }else if(!cReplaced){
        ui->replacedButton->setText("What has been replaced?");
        for(int i = 0; i< newPlan.size(); i++){
            QTextBlockFormat f;
            f.setBackground(QColor(255, 255, 255));
            cur.select(QTextCursor::LineUnderCursor);
            cur.setBlockFormat(f);
            cur2.select(QTextCursor::LineUnderCursor);
            cur2.setBlockFormat(f);
            cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            changes++;
        }
        cReplaced = true;
    }
    if(changes == 0){
        ui->replacedButton->setText("No replaced parts.");
    }
    changes = 0;

}



void Comparison::on_removedButton_clicked()
{
    QTextCursor cur = ui->planArea->textCursor();
    cur.setPosition(0,QTextCursor::MoveAnchor);
    QTextCursor cur2 = ui->planArea_2->textCursor();
    cur2.setPosition(0,QTextCursor::MoveAnchor);

    int next = 0;
    Plan = Plan + "\n";
    Plan2 =Plan2 + "\n";
    QStringList originalPlan = Plan.split("\n");
    QStringList newPlan = Plan2.split("\n");
    int changes = 0;

    if(cRemoved){
            ui->removedButton->setText("Hide what has been removed");
            for(int i = 0; i<newPlan.size()-1; i++){
                if(newPlan[i-next] != originalPlan[i]) {
                    if(originalPlan[i+1] == newPlan[i-next]){
                            QTextBlockFormat f;
                            f.setBackground(QColor(216, 135, 165));
                            cur.select(QTextCursor::LineUnderCursor);
                            cur.setBlockFormat(f);
                            changes++;
                            next++;
                    }
                }
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
            }
            cRemoved = false;

    }else if(!cRemoved){
            ui->removedButton->setText("What has been removed?");
            for(int i = 0; i< newPlan.size(); i++){
                QTextBlockFormat f;
                f.setBackground(QColor(255, 255, 255));
                cur.select(QTextCursor::LineUnderCursor);
                cur.setBlockFormat(f);
                cur2.select(QTextCursor::LineUnderCursor);
                cur2.setBlockFormat(f);
                cur.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                cur2.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor);
                changes++;
            }
            cRemoved = true;
    }

    if(changes == 0){
        ui->removedButton->setText("No removed parts.");
    }
    changes = 0;
}
