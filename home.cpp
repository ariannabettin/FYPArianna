#include "home.h"

/*Home window allows the user to load the source files and (optionally) a plan.
 It stores everything in three arrays and asks to give a meaningful name.*/

Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    ui->savedPlanlabel->setText(" ");

    /* - Combo box which determines the theme that will be applied to the interface. -
    The default theme is white.*/

    /*Code related to comboboxes adapted from:
     * Herman, G. and Mateer, D. (2011). QComboBox drop-down list. [online] Stack Overflow.
     Available at: https://stackoverflow.com/questions/8417038/qcombobox-drop-down-list-set-selected-item-style.*/

    ui->ThemeComboBox->addItem("Blue Theme");
    ui->ThemeComboBox->addItem("White Theme");
    ui->ThemeComboBox->setCurrentIndex(ui->ThemeComboBox->findText("White Theme"));
    //ui->doneButton->setStyleSheet("border-image:url(checkIcon.jpeg);");
    this->setFixedSize(800,600);

    /*set default white theme using Style Sheet.
    START ->*/
    this->setStyleSheet("background-color: #f1f2ed;color: #282827");
    ui->doneButton->setStyleSheet("background-color:#235d5e; color: #FFFFFF");

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
    //<- END.

     numItemsConstant = 0;
}

Home::~Home()
{
    delete ui;
}

//Button which allows the user to look for domain files saved in his computer.
void Home::on_DomainLoadButton_clicked()
{
    /* Code which access the user's files on his computer taken from:
     * QT C++ GUI Tutorial 23- How to use QFileDialog. (2013). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY: YouTube.
     * Qt Tutorials For Beginners 22 - QFile.(2016). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY&list=PLS1QulWo1RIZjrD_OLju84cUaUlLRe5jQ&index=25: YouTube.*/
    domain_path = QFileDialog::getOpenFileName(this,"Domain File", "C://");

    //code which sets the value of edit line
    if(domain_path.isEmpty()){
         ui->domainPathLine->setText("");
    }else{
        ui->domainPathLine->setText(domain_path);
    }
}

//Button which allows the user to look for problem files saved in his computer.
void Home::on_ProblemLoadButton_clicked()
{
    /* Code which access the user's files on his computer taken from:
     * QT C++ GUI Tutorial 23- How to use QFileDialog. (2013). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY: YouTube.
     * Qt Tutorials For Beginners 22 - QFile.(2016). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY&list=PLS1QulWo1RIZjrD_OLju84cUaUlLRe5jQ&index=25: YouTube.*/
    problem_path = QFileDialog::getOpenFileName(this,"Problem File", "C://");

     //code which sets the value of edit line
    if(problem_path.isEmpty()){
         ui->problemPathLine->setText("");
    }else{
        ui->problemPathLine->setText(problem_path);
    }
}

//Button which allows the user to look for plan saved in his computer.
void Home::on_PlanLoadButton_clicked()
{
    /* Code which access the user's files on his computer taken from:
     * QT C++ GUI Tutorial 23- How to use QFileDialog. (2013). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY: YouTube.
     * Qt Tutorials For Beginners 22 - QFile.(2016). [video] Directed by ProgrammingKnowledge.
     https://www.youtube.com/watch?v=tKdfpA74HYY&list=PLS1QulWo1RIZjrD_OLju84cUaUlLRe5jQ&index=25: YouTube.*/
    plan_path = QFileDialog::getOpenFileName(this,"Plan", "C://");

     //code which sets the value of edit line
    if(plan_path.isEmpty()){
         ui->PlanLine->setText("");
    }else{
         ui->PlanLine->setText(plan_path);
    }
}

/*Button which saves the files loaded and the name given by the user in four arrays.
Each plan and the related documentation will be accessible thanks to an ID which corresponds to
the index of the cells where data have been stored.*/
void Home::on_saveButton_clicked()
{
    QString planSaved;
    QString plan_name = ui->NamePlanLine->text();
    //check if the name provided by the user has at least 4 letters or chars
    if (plan_name.size() < 4){
        QMessageBox::warning(this,"Error:", "Please, give your plan a longer name.");
    }else{
    /*The following code checks if the user has inserted a name and if the name is different from any other.
      If so, the data provided will be stored in the right array.
    It also checks that the number of plans saved is less than 10 -> this number can be easily changed in gloabal.cpp */
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
                if(domain_path.isEmpty()){
                    QMessageBox::information(this,"Error","The plan will be saved, but a domain file has not been provided.");
                }
                domains[k] = domain_path;
                if(problem_path.isEmpty()){
                    QMessageBox::information(this,"Error","The plan will be saved, but a problem file has not been provided.");
                }
                problems[k] = problem_path;
                planSaved = "You have given to the plan the following title: '" + plans[k] + "'";
                k = k +1;
            }
        }
     }
    else {
        QMessageBox::warning(this,"Give your plan a title:","Ops! Too many plans loaded, please try to delete one before than adding a new one.");
    }

    /*Content of the plan file is extracted and saved in the planContent array.*/
    /*Code based on:
     * C++ Qt 12 - QFile. (2011). [video] Directed by VoidRealms.
    https://www.youtube.com/watch?v=4Mg6bw1MmAE&t=134s: YouTube.*/
    QFile file(plan_path);
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        //QMessageBox::information(this, "Error: ", "Not file found");
    }
    QTextStream in(&file);
    plansContent[k-1] = in.readAll();
    ui->savedPlanlabel->setText(planSaved);
   }
}

//This button allows the user to switch between the two themes.
void Home::on_switchThemeButton_clicked()
{
    //the themeColor value determines the theme that will be applied to the current window.
    /*Reference to the code:
     * How to Change the Background Color of QWidget - Using Style Sheet. (2018).Qt Wiki.
     Available at: https://wiki.qt.io/How_to_Change_the_Background_Color_of_QWidget.*/

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

//Button which calls the Select Window
void Home::on_doneButton_clicked()
{
    /*Code which opens a child window taken from:
     * QT C++ GUI Tutorial 5- How to open a new window from a pushbutton in Qt. (2013). [video] Directed by ProgrammingKnowledge. Youtube.
     Available at:https://www.youtube. com/watch?v=tP70B-pdTH0*/
    select = new Selection(this);
    select->show();
    this->hide();
}
