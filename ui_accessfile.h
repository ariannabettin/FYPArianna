/********************************************************************************
** Form generated from reading UI file 'accessfile.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCESSFILE_H
#define UI_ACCESSFILE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AccessFile
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *accessButton;
    QPushButton *domainButton;
    QTextEdit *planArea;
    QScrollBar *verticalScrollBar;
    QPushButton *valButton;
    QLabel *title_label;
    QPushButton *pfButton;
    QPushButton *pButton;

    void setupUi(QDialog *AccessFile)
    {
        if (AccessFile->objectName().isEmpty())
            AccessFile->setObjectName(QString::fromUtf8("AccessFile"));
        AccessFile->resize(640, 480);
        homeButton = new QPushButton(AccessFile);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(AccessFile);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(AccessFile);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(AccessFile);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        accessButton = new QPushButton(AccessFile);
        accessButton->setObjectName(QString::fromUtf8("accessButton"));
        accessButton->setGeometry(QRect(280, 0, 89, 41));
        domainButton = new QPushButton(AccessFile);
        domainButton->setObjectName(QString::fromUtf8("domainButton"));
        domainButton->setGeometry(QRect(0, 40, 111, 31));
        planArea = new QTextEdit(AccessFile);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 110, 381, 371));
        verticalScrollBar = new QScrollBar(AccessFile);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 110, 16, 371));
        verticalScrollBar->setOrientation(Qt::Vertical);
        valButton = new QPushButton(AccessFile);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(568, 434, 51, 31));
        title_label = new QLabel(AccessFile);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 90, 67, 17));
        pfButton = new QPushButton(AccessFile);
        pfButton->setObjectName(QString::fromUtf8("pfButton"));
        pfButton->setGeometry(QRect(0, 70, 89, 25));
        pButton = new QPushButton(AccessFile);
        pButton->setObjectName(QString::fromUtf8("pButton"));
        pButton->setGeometry(QRect(500, 50, 89, 25));

        retranslateUi(AccessFile);

        QMetaObject::connectSlotsByName(AccessFile);
    } // setupUi

    void retranslateUi(QDialog *AccessFile)
    {
        AccessFile->setWindowTitle(QApplication::translate("AccessFile", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("AccessFile", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("AccessFile", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("AccessFile", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("AccessFile", "Modify", 0, QApplication::UnicodeUTF8));
        accessButton->setText(QApplication::translate("AccessFile", "Access File", 0, QApplication::UnicodeUTF8));
        domainButton->setText(QApplication::translate("AccessFile", "Domain File", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("AccessFile", "VAL", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("AccessFile", "TextLabel", 0, QApplication::UnicodeUTF8));
        pfButton->setText(QApplication::translate("AccessFile", "PushButton", 0, QApplication::UnicodeUTF8));
        pButton->setText(QApplication::translate("AccessFile", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AccessFile: public Ui_AccessFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCESSFILE_H
