#include "home.h"
#include "ui_home.h"
#include "gloabal.h"
#include "selection.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
}

Home::~Home()
{
    delete ui;
}

void Home::on_DomainLoadButton_clicked()
{
    domain_path = QFileDialog::getOpenFileName(this,"Domain File", "C://");

    if(domain_path.isEmpty()){
         ui->domainPathLine->setText("");
    }else{
        ui->domainPathLine->setText(domain_path);
    }
}

void Home::on_ProblemLoadButton_clicked()
{

    problem_path = QFileDialog::getOpenFileName(this,"Problem File", "C://");

    if(problem_path.isEmpty()){
         ui->problemPathLine->setText("");
    }else{
        ui->problemPathLine->setText(problem_path);
    }
}

void Home::on_PathLoadButton_clicked()
{
    plan_path = QFileDialog::getOpenFileName(this,"Problem File", "C://");

    if(plan_path.isEmpty()){
         ui->PathLine->setText("");
    }else{
        ui->PathLine->setText(problem_path);
    }
}

void Home::on_doneButton_clicked()
{
   // I will probably delete this button

}

void Home::on_saveButton_clicked()
{
    QString plan_name = ui->NamePlanLine->text();

    if (k < 10){                                               // A maximum of 10 plans can be saved in one session
        int counter = 0;                                       // used to check if the name given to the plan is unique
        if( ui->NamePlanLine->text().isEmpty()) {
            QMessageBox::warning(this,"Give your plan a title:","Ops! You need to give a title to the plan. ");
        } else {
            for (int i = 0; i<k; i++){
                if(plan_name == plans[i]){
                   QMessageBox::warning(this,"Give your plan a title:","Ops! You have already used this name for a plan ");
                   counter = counter + 1;                       //if it is not, the counter increases
                }
            }
            if(counter == 0){                                   // if the counter is == 0, the name is saved
                plans[k] = plan_name;
                domains[k] = domain_path;
                problems[k] = problem_path;
                QMessageBox::information(this,"Give your plan a title:","You have given to the plan the following title: " + plans[k]);
                k = k +1;
            }
        }
    }
    else {                                                      // if more than 10 are loaded the user is warned.
        QMessageBox::warning(this,"Give your plan a title:","Ops! Too many plans loaded, please try to delete one before than adding a new one.");
    }

    QFile file(plan_path);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    Plan = in.readAll();
}

void Home::on_selectButton_clicked()
{
    select = new Selection(this);                               // go to "selection" window
    select->show();
    this->hide();
}


