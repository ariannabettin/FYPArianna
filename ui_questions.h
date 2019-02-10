/********************************************************************************
** Form generated from reading UI file 'questions.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONS_H
#define UI_QUESTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_Questions
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *questionsButton;
    QGroupBox *groupBox;
    QRadioButton *addOption;
    QRadioButton *removeOption;
    QRadioButton *replaceOption;
    QRadioButton *windowOption;
    QRadioButton *actionOption;
    QRadioButton *actionOption2;
    QPushButton *choiceButton;
    QLabel *question_label;
    QPlainTextEdit *planArea;
    QLabel *question_label1;
    QListWidget *list;
    QPushButton *doneButton;

    void setupUi(QDialog *Questions)
    {
        if (Questions->objectName().isEmpty())
            Questions->setObjectName(QString::fromUtf8("Questions"));
        Questions->resize(640, 480);
        homeButton = new QPushButton(Questions);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Questions);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Questions);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        questionsButton = new QPushButton(Questions);
        questionsButton->setObjectName(QString::fromUtf8("questionsButton"));
        questionsButton->setGeometry(QRect(210, 0, 89, 41));
        groupBox = new QGroupBox(Questions);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 60, 371, 221));
        addOption = new QRadioButton(groupBox);
        addOption->setObjectName(QString::fromUtf8("addOption"));
        addOption->setGeometry(QRect(20, 40, 471, 23));
        removeOption = new QRadioButton(groupBox);
        removeOption->setObjectName(QString::fromUtf8("removeOption"));
        removeOption->setGeometry(QRect(20, 70, 481, 23));
        replaceOption = new QRadioButton(groupBox);
        replaceOption->setObjectName(QString::fromUtf8("replaceOption"));
        replaceOption->setGeometry(QRect(20, 100, 491, 23));
        windowOption = new QRadioButton(groupBox);
        windowOption->setObjectName(QString::fromUtf8("windowOption"));
        windowOption->setGeometry(QRect(20, 130, 461, 23));
        actionOption = new QRadioButton(groupBox);
        actionOption->setObjectName(QString::fromUtf8("actionOption"));
        actionOption->setGeometry(QRect(20, 160, 501, 23));
        actionOption2 = new QRadioButton(groupBox);
        actionOption2->setObjectName(QString::fromUtf8("actionOption2"));
        actionOption2->setGeometry(QRect(20, 190, 221, 23));
        choiceButton = new QPushButton(groupBox);
        choiceButton->setObjectName(QString::fromUtf8("choiceButton"));
        choiceButton->setGeometry(QRect(260, 190, 89, 25));
        question_label = new QLabel(Questions);
        question_label->setObjectName(QString::fromUtf8("question_label"));
        question_label->setGeometry(QRect(60, 340, 41, 17));
        planArea = new QPlainTextEdit(Questions);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(80, 360, 16, 20));
        question_label1 = new QLabel(Questions);
        question_label1->setObjectName(QString::fromUtf8("question_label1"));
        question_label1->setGeometry(QRect(150, 340, 341, 17));
        list = new QListWidget(Questions);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(440, 70, 161, 201));
        doneButton = new QPushButton(Questions);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(530, 290, 61, 25));

        retranslateUi(Questions);

        QMetaObject::connectSlotsByName(Questions);
    } // setupUi

    void retranslateUi(QDialog *Questions)
    {
        Questions->setWindowTitle(QApplication::translate("Questions", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Questions", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Questions", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Questions", "Visualise", 0, QApplication::UnicodeUTF8));
        questionsButton->setText(QApplication::translate("Questions", "Questions", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Questions", "Select one of the following question:", 0, QApplication::UnicodeUTF8));
        addOption->setText(QApplication::translate("Questions", "Why A is not involved in the plan?", 0, QApplication::UnicodeUTF8));
        removeOption->setText(QApplication::translate("Questions", "Why A is involved in the plan?", 0, QApplication::UnicodeUTF8));
        replaceOption->setText(QApplication::translate("Questions", "Why A insted of B? ", 0, QApplication::UnicodeUTF8));
        windowOption->setText(QApplication::translate("Questions", "Why A not at time t[i]?", 0, QApplication::UnicodeUTF8));
        actionOption->setText(QApplication::translate("Questions", "Why A not before B?", 0, QApplication::UnicodeUTF8));
        actionOption2->setText(QApplication::translate("Questions", "Why A not after B?", 0, QApplication::UnicodeUTF8));
        choiceButton->setText(QApplication::translate("Questions", "PushButton", 0, QApplication::UnicodeUTF8));
        question_label->setText(QString());
        question_label1->setText(QString());
        doneButton->setText(QApplication::translate("Questions", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Questions: public Ui_Questions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONS_H
