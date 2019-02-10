/********************************************************************************
** Form generated from reading UI file 'access.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESS_H
#define UI_ACCESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Access
{
public:
    QPushButton *domainButton;
    QPushButton *problemButton;
    QPushButton *modifyButton;
    QPushButton *accessButton;
    QPushButton *homeButton;
    QPushButton *selecyButton;
    QPushButton *visualiseButton;

    void setupUi(QDialog *Access)
    {
        if (Access->objectName().isEmpty())
            Access->setObjectName(QString::fromUtf8("Access"));
        Access->resize(640, 480);
        domainButton = new QPushButton(Access);
        domainButton->setObjectName(QString::fromUtf8("domainButton"));
        domainButton->setGeometry(QRect(0, 40, 121, 31));
        problemButton = new QPushButton(Access);
        problemButton->setObjectName(QString::fromUtf8("problemButton"));
        problemButton->setGeometry(QRect(0, 70, 121, 31));
        modifyButton = new QPushButton(Access);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        accessButton = new QPushButton(Access);
        accessButton->setObjectName(QString::fromUtf8("accessButton"));
        accessButton->setGeometry(QRect(280, 0, 91, 41));
        homeButton = new QPushButton(Access);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selecyButton = new QPushButton(Access);
        selecyButton->setObjectName(QString::fromUtf8("selecyButton"));
        selecyButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Access);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));

        retranslateUi(Access);

        QMetaObject::connectSlotsByName(Access);
    } // setupUi

    void retranslateUi(QDialog *Access)
    {
        Access->setWindowTitle(QApplication::translate("Access", "Dialog", 0, QApplication::UnicodeUTF8));
        domainButton->setText(QApplication::translate("Access", "Domain File", 0, QApplication::UnicodeUTF8));
        problemButton->setText(QApplication::translate("Access", "Problem File", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("Access", "Modify", 0, QApplication::UnicodeUTF8));
        accessButton->setText(QApplication::translate("Access", " Access File", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Access", "Home", 0, QApplication::UnicodeUTF8));
        selecyButton->setText(QApplication::translate("Access", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Access", "Visualise", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Access: public Ui_Access {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESS_H
