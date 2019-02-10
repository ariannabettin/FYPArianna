/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Window
{
public:
    QGroupBox *groupBox;
    QLineEdit *lW2;
    QLineEdit *lW4;
    QLineEdit *lW3;
    QLineEdit *lW1;
    QLabel *label;
    QGroupBox *groupBox_2;
    QRadioButton *optionA;
    QRadioButton *optionB;
    QRadioButton *optionC;
    QPushButton *doneButton;
    QPushButton *doneButton_2;

    void setupUi(QDialog *Window)
    {
        if (Window->objectName().isEmpty())
            Window->setObjectName(QString::fromUtf8("Window"));
        Window->resize(240, 320);
        groupBox = new QGroupBox(Window);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 191, 71));
        lW2 = new QLineEdit(groupBox);
        lW2->setObjectName(QString::fromUtf8("lW2"));
        lW2->setGeometry(QRect(60, 30, 21, 25));
        lW4 = new QLineEdit(groupBox);
        lW4->setObjectName(QString::fromUtf8("lW4"));
        lW4->setGeometry(QRect(140, 30, 21, 25));
        lW3 = new QLineEdit(groupBox);
        lW3->setObjectName(QString::fromUtf8("lW3"));
        lW3->setGeometry(QRect(110, 30, 21, 25));
        lW1 = new QLineEdit(groupBox);
        lW1->setObjectName(QString::fromUtf8("lW1"));
        lW1->setGeometry(QRect(30, 30, 21, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(86, 30, 20, 20));
        groupBox_2 = new QGroupBox(Window);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 110, 161, 141));
        optionA = new QRadioButton(groupBox_2);
        optionA->setObjectName(QString::fromUtf8("optionA"));
        optionA->setGeometry(QRect(0, 50, 161, 23));
        optionB = new QRadioButton(groupBox_2);
        optionB->setObjectName(QString::fromUtf8("optionB"));
        optionB->setGeometry(QRect(0, 80, 161, 23));
        optionC = new QRadioButton(groupBox_2);
        optionC->setObjectName(QString::fromUtf8("optionC"));
        optionC->setGeometry(QRect(0, 110, 151, 23));
        doneButton = new QPushButton(Window);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(150, 280, 61, 25));
        doneButton_2 = new QPushButton(Window);
        doneButton_2->setObjectName(QString::fromUtf8("doneButton_2"));
        doneButton_2->setGeometry(QRect(210, 370, 61, 25));

        retranslateUi(Window);

        QMetaObject::connectSlotsByName(Window);
    } // setupUi

    void retranslateUi(QDialog *Window)
    {
        Window->setWindowTitle(QApplication::translate("Window", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Window", "Set time window:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Window", "  :", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Window", "Choose an option: ", 0, QApplication::UnicodeUTF8));
        optionA->setText(QApplication::translate("Window", "constrain to window", 0, QApplication::UnicodeUTF8));
        optionB->setText(QApplication::translate("Window", "force at least once", 0, QApplication::UnicodeUTF8));
        optionC->setText(QApplication::translate("Window", "constrain and force", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("Window", "Done", 0, QApplication::UnicodeUTF8));
        doneButton_2->setText(QApplication::translate("Window", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Window: public Ui_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H
