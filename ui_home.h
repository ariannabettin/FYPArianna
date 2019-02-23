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
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralWidget;
    QPushButton *homeButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *domainPathLine;
    QLabel *label_2;
    QLineEdit *problemPathLine;
    QLabel *label_3;
    QLineEdit *PathLine;
    QVBoxLayout *verticalLayout_2;
    QPushButton *DomainLoadButton;
    QPushButton *ProblemLoadButton;
    QPushButton *PathLoadButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *cancelButton;
    QPushButton *doneButton;
    QHBoxLayout *horizontalLayout_6;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *NamePlanLine;
    QPushButton *saveButton;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *loadNewButton;
    QPushButton *selectButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(653, 443);
        centralWidget = new QWidget(Home);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        homeButton = new QPushButton(centralWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 60, 621, 341));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        domainPathLine = new QLineEdit(groupBox);
        domainPathLine->setObjectName(QString::fromUtf8("domainPathLine"));

        formLayout->setWidget(0, QFormLayout::FieldRole, domainPathLine);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        problemPathLine = new QLineEdit(groupBox);
        problemPathLine->setObjectName(QString::fromUtf8("problemPathLine"));

        formLayout->setWidget(1, QFormLayout::FieldRole, problemPathLine);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        PathLine = new QLineEdit(groupBox);
        PathLine->setObjectName(QString::fromUtf8("PathLine"));

        formLayout->setWidget(2, QFormLayout::FieldRole, PathLine);


        horizontalLayout_5->addLayout(formLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        DomainLoadButton = new QPushButton(groupBox);
        DomainLoadButton->setObjectName(QString::fromUtf8("DomainLoadButton"));

        verticalLayout_2->addWidget(DomainLoadButton);

        ProblemLoadButton = new QPushButton(groupBox);
        ProblemLoadButton->setObjectName(QString::fromUtf8("ProblemLoadButton"));

        verticalLayout_2->addWidget(ProblemLoadButton);

        PathLoadButton = new QPushButton(groupBox);
        PathLoadButton->setObjectName(QString::fromUtf8("PathLoadButton"));

        verticalLayout_2->addWidget(PathLoadButton);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_3->addWidget(cancelButton);

        doneButton = new QPushButton(groupBox);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));

        horizontalLayout_3->addWidget(doneButton);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addWidget(groupBox);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        NamePlanLine = new QLineEdit(groupBox_2);
        NamePlanLine->setObjectName(QString::fromUtf8("NamePlanLine"));

        verticalLayout_3->addWidget(NamePlanLine);

        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout_3->addWidget(saveButton);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));

        verticalLayout_7->addLayout(verticalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        loadNewButton = new QPushButton(groupBox_2);
        loadNewButton->setObjectName(QString::fromUtf8("loadNewButton"));

        horizontalLayout_4->addWidget(loadNewButton);

        selectButton = new QPushButton(groupBox_2);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));

        horizontalLayout_4->addWidget(selectButton);


        verticalLayout_7->addLayout(horizontalLayout_4);


        horizontalLayout->addLayout(verticalLayout_7);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_6->addWidget(groupBox_2);


        verticalLayout_5->addLayout(horizontalLayout_6);

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
        homeButton->setText(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Home", " Load the domain file and the problem file:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Home", "Domain:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Home", "Problem:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Home", "Label:", 0, QApplication::UnicodeUTF8));
        DomainLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        ProblemLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        PathLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Home", "Cancel", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("Home", "Done", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Home", " Give your plan a name:", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Home", "Save", 0, QApplication::UnicodeUTF8));
        loadNewButton->setText(QApplication::translate("Home", "Load new Plan", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Home", "Select", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
