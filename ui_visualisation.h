/********************************************************************************
** Form generated from reading UI file 'visualisation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATION_H
#define UI_VISUALISATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Visualisation
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *addNewButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QPushButton *valButton;
    QPushButton *questionButton;
    QPushButton *visualiseButton_2;

    void setupUi(QDialog *Visualisation)
    {
        if (Visualisation->objectName().isEmpty())
            Visualisation->setObjectName(QString::fromUtf8("Visualisation"));
        Visualisation->resize(640, 480);
        homeButton = new QPushButton(Visualisation);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Visualisation);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Visualisation);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(Visualisation);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(0, 70, 111, 31));
        addNewButton = new QPushButton(Visualisation);
        addNewButton->setObjectName(QString::fromUtf8("addNewButton"));
        addNewButton->setGeometry(QRect(0, 100, 111, 31));
        planArea = new QTextEdit(Visualisation);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 90, 381, 391));
        title_label = new QLabel(Visualisation);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 70, 381, 17));
        valButton = new QPushButton(Visualisation);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(560, 430, 51, 31));
        questionButton = new QPushButton(Visualisation);
        questionButton->setObjectName(QString::fromUtf8("questionButton"));
        questionButton->setGeometry(QRect(0, 40, 111, 31));
        visualiseButton_2 = new QPushButton(Visualisation);
        visualiseButton_2->setObjectName(QString::fromUtf8("visualiseButton_2"));
        visualiseButton_2->setGeometry(QRect(530, 20, 89, 25));

        retranslateUi(Visualisation);

        QMetaObject::connectSlotsByName(Visualisation);
    } // setupUi

    void retranslateUi(QDialog *Visualisation)
    {
        Visualisation->setWindowTitle(QApplication::translate("Visualisation", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Visualisation", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Visualisation", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Visualisation", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("Visualisation", "Modify", 0, QApplication::UnicodeUTF8));
        addNewButton->setText(QApplication::translate("Visualisation", "Add new Plan", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Visualisation", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("Visualisation", "VAL", 0, QApplication::UnicodeUTF8));
        questionButton->setText(QApplication::translate("Visualisation", "Ask a Question", 0, QApplication::UnicodeUTF8));
        visualiseButton_2->setText(QApplication::translate("Visualisation", "Visualise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Visualisation: public Ui_Visualisation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATION_H
