/********************************************************************************
** Form generated from reading UI file 'beforeafter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEFOREAFTER_H
#define UI_BEFOREAFTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_BeforeAfter
{
public:
    QPushButton *doneButton;
    QGroupBox *groupBox_2;
    QRadioButton *optionA;
    QRadioButton *optionB;
    QRadioButton *optionC;
    QRadioButton *optionD;
    QGroupBox *groupBox;
    QLineEdit *stepsLine;

    void setupUi(QDialog *BeforeAfter)
    {
        if (BeforeAfter->objectName().isEmpty())
            BeforeAfter->setObjectName(QString::fromUtf8("BeforeAfter"));
        BeforeAfter->resize(240, 320);
        doneButton = new QPushButton(BeforeAfter);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(140, 280, 61, 25));
        groupBox_2 = new QGroupBox(BeforeAfter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 20, 161, 161));
        optionA = new QRadioButton(groupBox_2);
        optionA->setObjectName(QString::fromUtf8("optionA"));
        optionA->setGeometry(QRect(0, 30, 161, 23));
        optionB = new QRadioButton(groupBox_2);
        optionB->setObjectName(QString::fromUtf8("optionB"));
        optionB->setGeometry(QRect(0, 60, 161, 23));
        optionC = new QRadioButton(groupBox_2);
        optionC->setObjectName(QString::fromUtf8("optionC"));
        optionC->setGeometry(QRect(0, 90, 151, 23));
        optionD = new QRadioButton(groupBox_2);
        optionD->setObjectName(QString::fromUtf8("optionD"));
        optionD->setGeometry(QRect(0, 120, 151, 23));
        groupBox = new QGroupBox(BeforeAfter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 190, 191, 71));
        stepsLine = new QLineEdit(groupBox);
        stepsLine->setObjectName(QString::fromUtf8("stepsLine"));
        stepsLine->setGeometry(QRect(20, 30, 141, 25));

        retranslateUi(BeforeAfter);

        QMetaObject::connectSlotsByName(BeforeAfter);
    } // setupUi

    void retranslateUi(QDialog *BeforeAfter)
    {
        BeforeAfter->setWindowTitle(QApplication::translate("BeforeAfter", "Dialog", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("BeforeAfter", "Done", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("BeforeAfter", "Choose an option: ", 0, QApplication::UnicodeUTF8));
        optionA->setText(QApplication::translate("BeforeAfter", "before", 0, QApplication::UnicodeUTF8));
        optionB->setText(QApplication::translate("BeforeAfter", "after", 0, QApplication::UnicodeUTF8));
        optionC->setText(QApplication::translate("BeforeAfter", "before n steps", 0, QApplication::UnicodeUTF8));
        optionD->setText(QApplication::translate("BeforeAfter", "after n steps", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BeforeAfter", "Set number of steps", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BeforeAfter: public Ui_BeforeAfter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEFOREAFTER_H
