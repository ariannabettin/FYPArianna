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
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_validPlan
{
public:
    QPushButton *compareButton;
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *Button;
    QPushButton *pushButton;
    QPushButton *modifyButton;
    QLabel *reportLabel;

    void setupUi(QDialog *validPlan)
    {
        if (validPlan->objectName().isEmpty())
            validPlan->setObjectName(QString::fromUtf8("validPlan"));
        validPlan->resize(640, 480);
        compareButton = new QPushButton(validPlan);
        compareButton->setObjectName(QString::fromUtf8("compareButton"));
        compareButton->setGeometry(QRect(350, 0, 89, 41));
        homeButton = new QPushButton(validPlan);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(validPlan);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(validPlan);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        Button = new QPushButton(validPlan);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(280, 0, 71, 41));
        pushButton = new QPushButton(validPlan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 0, 89, 41));
        modifyButton = new QPushButton(validPlan);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        reportLabel = new QLabel(validPlan);
        reportLabel->setObjectName(QString::fromUtf8("reportLabel"));
        reportLabel->setGeometry(QRect(80, 110, 421, 351));

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
        Button->setText(QApplication::translate("validPlan", "Add", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("validPlan", "Validate", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("validPlan", "Modify", 0, QApplication::UnicodeUTF8));
        reportLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class validPlan: public Ui_validPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDPLAN_H
