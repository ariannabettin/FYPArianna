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
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QWidget *centralWidget;
    QPushButton *homeButton;
    QLabel *savedPlanlabel;
    QPushButton *doneButton;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *domainPathLine;
    QPushButton *DomainLoadButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *problemPathLine;
    QPushButton *ProblemLoadButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *PlanLine;
    QPushButton *PlanLoadButton;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QFrame *frame_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *NamePlanLine;
    QPushButton *saveButton;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_9;
    QComboBox *ThemeComboBox;
    QPushButton *switchThemeButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QString::fromUtf8("Home"));
        Home->resize(798, 564);
        Home->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        centralWidget = new QWidget(Home);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        homeButton = new QPushButton(centralWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 81, 51));
        homeButton->setStyleSheet(QString::fromUtf8("font: 75 13pt \"TakaoPGothic\";"));
        savedPlanlabel = new QLabel(centralWidget);
        savedPlanlabel->setObjectName(QString::fromUtf8("savedPlanlabel"));
        savedPlanlabel->setGeometry(QRect(40, 520, 531, 21));
        savedPlanlabel->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        doneButton = new QPushButton(centralWidget);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(700, 500, 51, 41));
        doneButton->setAutoFillBackground(true);
        doneButton->setStyleSheet(QString::fromUtf8(""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 110, 551, 17));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";\n"
""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 370, 211, 17));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 130, 711, 221));
        frame->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 691, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_2->addWidget(label);

        domainPathLine = new QLineEdit(layoutWidget);
        domainPathLine->setObjectName(QString::fromUtf8("domainPathLine"));
        domainPathLine->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_2->addWidget(domainPathLine);

        DomainLoadButton = new QPushButton(layoutWidget);
        DomainLoadButton->setObjectName(QString::fromUtf8("DomainLoadButton"));
        DomainLoadButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_2->addWidget(DomainLoadButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_3->addWidget(label_2);

        problemPathLine = new QLineEdit(layoutWidget);
        problemPathLine->setObjectName(QString::fromUtf8("problemPathLine"));
        problemPathLine->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_3->addWidget(problemPathLine);

        ProblemLoadButton = new QPushButton(layoutWidget);
        ProblemLoadButton->setObjectName(QString::fromUtf8("ProblemLoadButton"));
        ProblemLoadButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_3->addWidget(ProblemLoadButton);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout->addWidget(label_3);

        PlanLine = new QLineEdit(layoutWidget);
        PlanLine->setObjectName(QString::fromUtf8("PlanLine"));
        PlanLine->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout->addWidget(PlanLine);

        PlanLoadButton = new QPushButton(layoutWidget);
        PlanLoadButton->setObjectName(QString::fromUtf8("PlanLoadButton"));
        PlanLoadButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout->addWidget(PlanLoadButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        horizontalLayout_4->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_4);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(40, 390, 261, 101));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 231, 64));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        NamePlanLine = new QLineEdit(layoutWidget1);
        NamePlanLine->setObjectName(QString::fromUtf8("NamePlanLine"));
        NamePlanLine->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        verticalLayout_3->addWidget(NamePlanLine);

        saveButton = new QPushButton(layoutWidget1);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        verticalLayout_3->addWidget(saveButton);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(620, 20, 151, 61));
        verticalLayout_9 = new QVBoxLayout(layoutWidget2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        ThemeComboBox = new QComboBox(layoutWidget2);
        ThemeComboBox->setObjectName(QString::fromUtf8("ThemeComboBox"));
        ThemeComboBox->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        verticalLayout_9->addWidget(ThemeComboBox);

        switchThemeButton = new QPushButton(layoutWidget2);
        switchThemeButton->setObjectName(QString::fromUtf8("switchThemeButton"));
        switchThemeButton->setStyleSheet(QString::fromUtf8("font: 75 11pt \"TakaoPGothic\";"));

        verticalLayout_9->addWidget(switchThemeButton);

        Home->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Home);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Home->setStatusBar(statusBar);

        retranslateUi(Home);
        QObject::connect(cancelButton, SIGNAL(clicked()), PlanLine, SLOT(clear()));
        QObject::connect(cancelButton, SIGNAL(clicked()), domainPathLine, SLOT(clear()));
        QObject::connect(cancelButton, SIGNAL(clicked()), problemPathLine, SLOT(clear()));

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Home", "Home", 0, QApplication::UnicodeUTF8));
        savedPlanlabel->setText(QApplication::translate("Home", "TextLabel", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("Home", "Next", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Home", "Upload the domain file, the problem file and (*optional) your plan:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Home", " Give a name to your plan:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Home", "Domain:", 0, QApplication::UnicodeUTF8));
        DomainLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Home", "Problem:", 0, QApplication::UnicodeUTF8));
        ProblemLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Home", "Plan:", 0, QApplication::UnicodeUTF8));
        PlanLoadButton->setText(QApplication::translate("Home", "Load", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Home", "Cancel", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Home", "Save", 0, QApplication::UnicodeUTF8));
        switchThemeButton->setText(QApplication::translate("Home", "Apply", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
