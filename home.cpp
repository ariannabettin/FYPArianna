#include "home.h"


Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->savedPlanlabel->setText(" ");

    ui->ThemeComboBox->addItem("Blue Theme");
    ui->ThemeComboBox->addItem("White Theme");
    ui->ThemeComboBox->setCurrentIndex(ui->ThemeComboBox->findText("White Theme"));
    ui->doneButton->setStyleSheet("border-image:url(checkIcon.jpeg);");

    this->setStyleSheet("background-color: #f1f2ed;color: #282827");
    this->setFixedSize(800,600);

    ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
    ui->DomainLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
    ui->ProblemLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
    ui->PlanLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
    ui->cancelButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
    ui->homeButton->setStyleSheet("background-color:#ad2b2b; color: #FFFFFF");
    ui->switchThemeButton->setStyleSheet("background-color:#25245e; color: #FFFFFF");

    ui->PlanLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
    ui->problemPathLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
    ui->domainPathLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
    ui->NamePlanLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

    ui->ThemeComboBox->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");


     numItemsConstant = 0;
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


void Home::on_PlanLoadButton_clicked()
{
    plan_path = QFileDialog::getOpenFileName(this,"Plan", "C://");
    if(plan_path.isEmpty()){
         ui->PlanLine->setText("");
    }else{
         ui->PlanLine->setText(plan_path);
    }
}


void Home::on_doneButton_clicked()
{
    select = new Selection(this);
    select->show();
    this->hide();
}


void Home::on_saveButton_clicked()
{
    QString plan_name = ui->NamePlanLine->text();
    if (plan_name.size() < 4){
        QMessageBox::warning(this,"Error:", "Please, give your plan a longer name.");
    }else{

    QString planSaved;

    if (k < 10){
        int counter = 0;
        if( ui->NamePlanLine->text().isEmpty()) {
            QMessageBox::warning(this,"Give your plan a title:","Ops! You need to give a title to the plan. ");
        } else {
            for (int i = 0; i<k; i++){
                if(plan_name == plans[i]){
                   QMessageBox::warning(this,"Give your plan a title:","Ops! You have already used this name for a plan ");
                   counter = counter + 1;
                }
            }
            if(counter == 0){
                plans[k] = plan_name;
                domains[k] = domain_path;
                problems[k] = problem_path;
                planSaved = "You have given to the plan the following title: '" + plans[k] + "'";
                k = k +1;
            }
        }
    }
    else {
        QMessageBox::warning(this,"Give your plan a title:","Ops! Too many plans loaded, please try to delete one before than adding a new one.");
    }

    QFile file(plan_path);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        //QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    plansContent[k-1] = in.readAll();
    ui->savedPlanlabel->setText(planSaved);
   }
}


void Home::on_switchThemeButton_clicked()
{
    if(ui->ThemeComboBox->currentText() == "Blue Theme"){
        this->setStyleSheet("background-color: #25245e; color: #FFFFFF");

            ui->saveButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF;");
            ui->DomainLoadButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->ProblemLoadButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->PlanLoadButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->cancelButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");
            ui->switchThemeButton->setStyleSheet("background-color: #498AA0; color: #FFFFFF");

            ui->PlanLine->setStyleSheet("background-color:#92afd3; color: #3E4C5E;""border: 1px solid #cdd1d6;""height: 25px;");
            ui->problemPathLine->setStyleSheet("background-color: #92afd3; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");
            ui->domainPathLine->setStyleSheet("background-color: #92afd3; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");
            ui->NamePlanLine->setStyleSheet("background-color: #92afd3; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");

            ui->ThemeComboBox->setStyleSheet("background-color: #92afd3; color: #000000;""border: 1px solid #cdd1d6;""height: 25px;");

            themeColor = "black";
    }else{
        this->setStyleSheet("background-color: #f1f2ed;color: #282827");

            ui->saveButton->setStyleSheet("background-color: #25245e; color: #FFFFFF;");
            ui->DomainLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            ui->ProblemLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            ui->PlanLoadButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            ui->cancelButton->setStyleSheet("background-color: #25245e; color: #FFFFFF");
            ui->switchThemeButton->setStyleSheet("background-color:#25245e; color: #FFFFFF");

            ui->PlanLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
            ui->problemPathLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
            ui->domainPathLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");
            ui->NamePlanLine->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

            ui->ThemeComboBox->setStyleSheet("background-color: #c6c3dd; color: #282827;""border: 1px solid #3b2baf;""height: 25px;");

            themeColor = "white";
    }

}


