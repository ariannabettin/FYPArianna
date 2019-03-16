/********************************************************************************
** Form generated from reading UI file 'validplan.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDPLAN_H
#define UI_VALIDPLAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_validPlan
{
public:
    QPushButton *compareButton;
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *validatePlan;
    QLabel *reportLabel;
    QPushButton *backButton;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *statementLabel;
    QLineEdit *renameLine;
    QPushButton *exportButton;

    void setupUi(QDialog *validPlan)
    {
        if (validPlan->objectName().isEmpty())
            validPlan->setObjectName(QString::fromUtf8("validPlan"));
        validPlan->resize(640, 480);
        validPlan->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        compareButton = new QPushButton(validPlan);
        compareButton->setObjectName(QString::fromUtf8("compareButton"));
        compareButton->setGeometry(QRect(210, 0, 91, 41));
        homeButton = new QPushButton(validPlan);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(validPlan);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(validPlan);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        validatePlan = new QPushButton(validPlan);
        validatePlan->setObjectName(QString::fromUtf8("validatePlan"));
        validatePlan->setGeometry(QRect(300, 0, 89, 41));
        reportLabel = new QLabel(validPlan);
        reportLabel->setObjectName(QString::fromUtf8("reportLabel"));
        reportLabel->setGeometry(QRect(30, 130, 331, 351));
        backButton = new QPushButton(validPlan);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 10, 89, 25));
        line = new QFrame(validPlan);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(380, 110, 20, 371));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(validPlan);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(410, 110, 171, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        statementLabel = new QLabel(layoutWidget);
        statementLabel->setObjectName(QString::fromUtf8("statementLabel"));

        verticalLayout->addWidget(statementLabel);

        renameLine = new QLineEdit(layoutWidget);
        renameLine->setObjectName(QString::fromUtf8("renameLine"));

        verticalLayout->addWidget(renameLine);

        exportButton = new QPushButton(layoutWidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));

        verticalLayout->addWidget(exportButton);


        retranslateUi(validPlan);

        QMetaObject::connectSlotsByName(validPlan);
    } // setupUi

    void retranslateUi(QDialog *validPlan)
    {
        validPlan->setWindowTitle(QApplication::translate("validPlan", "Dialog", 0, QApplication::UnicodeUTF8));
        compareButton->setText(QApplication::translate("validPlan", "Compare", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("validPlan", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("validPlan", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("validPlan", "Visualise", 0, QApplication::UnicodeUTF8));
        validatePlan->setText(QApplication::translate("validPlan", "Validate", 0, QApplication::UnicodeUTF8));
        reportLabel->setText(QString());
        backButton->setText(QApplication::translate("validPlan", "go back", 0, QApplication::UnicodeUTF8));
        statementLabel->setText(QApplication::translate("validPlan", "Rename your XPlan:", 0, QApplication::UnicodeUTF8));
        exportButton->setText(QApplication::translate("validPlan", "Export File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class validPlan: public Ui_validPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDPLAN_H
