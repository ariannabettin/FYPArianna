/********************************************************************************
** Form generated from reading UI file 'replaceaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEACTION_H
#define UI_REPLACEACTION_H

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

class Ui_ReplaceAction
{
public:
    QPushButton *visualiseButton;
    QPushButton *selectButton;
    QPushButton *selecyButton;
    QPushButton *replaceButton;
    QPushButton *homeButton;
    QLabel *title_label;
    QTextEdit *planArea;
    QScrollBar *verticalScrollBar;
    QPushButton *valButton;

    void setupUi(QDialog *ReplaceAction)
    {
        if (ReplaceAction->objectName().isEmpty())
            ReplaceAction->setObjectName(QString::fromUtf8("ReplaceAction"));
        ReplaceAction->resize(640, 480);
        visualiseButton = new QPushButton(ReplaceAction);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        selectButton = new QPushButton(ReplaceAction);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(210, 0, 71, 41));
        selecyButton = new QPushButton(ReplaceAction);
        selecyButton->setObjectName(QString::fromUtf8("selecyButton"));
        selecyButton->setGeometry(QRect(70, 0, 71, 41));
        replaceButton = new QPushButton(ReplaceAction);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(280, 0, 71, 41));
        homeButton = new QPushButton(ReplaceAction);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        title_label = new QLabel(ReplaceAction);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 100, 371, 17));
        planArea = new QTextEdit(ReplaceAction);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 120, 381, 361));
        verticalScrollBar = new QScrollBar(ReplaceAction);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 120, 16, 160));
        verticalScrollBar->setOrientation(Qt::Vertical);
        valButton = new QPushButton(ReplaceAction);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(560, 430, 51, 31));

        retranslateUi(ReplaceAction);

        QMetaObject::connectSlotsByName(ReplaceAction);
    } // setupUi

    void retranslateUi(QDialog *ReplaceAction)
    {
        ReplaceAction->setWindowTitle(QApplication::translate("ReplaceAction", "Dialog", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("ReplaceAction", "Visualise", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("ReplaceAction", "Modify", 0, QApplication::UnicodeUTF8));
        selecyButton->setText(QApplication::translate("ReplaceAction", "Select", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("ReplaceAction", "Replace", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("ReplaceAction", "Home", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("ReplaceAction", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("ReplaceAction", "VAL", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ReplaceAction: public Ui_ReplaceAction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEACTION_H
