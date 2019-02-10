/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *domainPathLine;
    QLineEdit *problemPathLine;
    QPushButton *DomainLoadButton;
    QPushButton *ProblemLoadButton;
    QPushButton *cancelButton;
    QPushButton *doneButton;
    QGroupBox *groupBox_2;
    QLineEdit *NamePlanLine;
    QPushButton *saveButton;
    QPushButton *loadNewButton;
    QPushButton *selectButton;
    QPushButton *homeButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(676, 437);
        centralWidget = new QWidget(Home);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 611, 171));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 67, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 67, 17));
        domainPathLine = new QLineEdit(groupBox);
        domainPathLine->setObjectName(QString::fromUtf8("domainPathLine"));
        domainPathLine->setGeometry(QRect(80, 30, 421, 25));
        problemPathLine = new QLineEdit(groupBox);
        problemPathLine->setObjectName(QString::fromUtf8("problemPathLine"));
        problemPathLine->setGeometry(QRect(80, 60, 421, 25));
        DomainLoadButton = new QPushButton(groupBox);
        DomainLoadButton->setObjectName(QString::fromUtf8("DomainLoadButton"));
        DomainLoadButton->setGeometry(QRect(510, 30, 81, 25));
        ProblemLoadButton = new QPushButton(groupBox);
        ProblemLoadButton->setObjectName(QString::fromUtf8("ProblemLoadButton"));
        ProblemLoadButton->setGeometry(QRect(510, 60, 81, 25));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(418, 130, 81, 25));
        doneButton = new QPushButton(groupBox);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(510, 130, 81, 25));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 240, 261, 131));
        NamePlanLine = new QLineEdit(groupBox_2);
        NamePlanLine->setObjectName(QString::fromUtf8("NamePlanLine"));
        NamePlanLine->setGeometry(QRect(20, 40, 221, 25));
        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(20, 80, 89, 25));
        loadNewButton = new QPushButton(centralWidget);
        loadNewButton->setObjectName(QString::fromUtf8("loadNewButton"));
        loadNewButton->setGeometry(QRect(430, 350, 111, 25));
        selectButton = new QPushButton(centralWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(560, 350, 89, 25));
        homeButton = new QPushButton(centralWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        Home->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Home);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Home->setStatusBar(statusBar);

        retranslateUi(Home);
        QObject::connect(loadNewButton, SIGNAL(clicked()), NamePlanLine, SLOT(clear()));
        QObject::connect(loadNewButton, SIGNAL(clicked()), problemPathLine, SLOT(clear()));
        QObject::connect(loadNewButton, SIGNAL(clicked()), domainPathLine, SLOT(clear()));
        QObject::connect(cancelButton, SIGNAL(clicked()), problemPathLine, SLOT(clear()));
        QObject::connect(cancelButton, SIGNAL(clicked()), domainPathLine, SLOT(clear()));

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Home", "Load the domain file and the problem file:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Home", "Domain:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Home", "Problem:", 0, QApplication::UnicodeUTF8));
        DomainLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        ProblemLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Home", "Cancel", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("Home", "Done", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Home", "Give your plan a name:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Home", "Save", 0, QApplication::UnicodeUTF8));
        loadNewButton->setText(QApplication::translate("Home", "Load new Plan", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Home", "Select", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
