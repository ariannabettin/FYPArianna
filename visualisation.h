#ifndef VISUALISATION_H
#define VISUALISATION_H
#include "modification.h"
#include "userquestions.h"
#include <QDialog>
#include "accessfile.h"
#include "ui_visualisation.h"
#include "gloabal.h"
#include "modification.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "accessfile.h"

namespace Ui {
class Visualisation;
}

class Visualisation : public QDialog
{
    Q_OBJECT

public:
    explicit Visualisation(QWidget *parent = 0);
    ~Visualisation();

private slots:

    void on_homeButton_clicked();

    void on_selectButton_clicked();

    void on_modifyButton_clicked();

    void on_questionButton_clicked();

    void on_accessFile_clicked();

    void on_reloadButton_clicked();

    void on_backButton_clicked();

private:
    Ui::Visualisation *ui;
    Modification *modify;    //[2]
    UserQuestions * question;    //[2]
    Access *access;    //[2]
};

#endif // VISUALISATION_H
