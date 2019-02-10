/********************************************************************************
** Form generated from reading UI file 'newactiont.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACTIONT_H
#define UI_NEWACTIONT_H

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

class Ui_NewActionT
{
public:
    QPushButton *addNewActionButton;
    QLabel *title_label;
    QPushButton *ReadButton;
    QTextEdit *planArea;
    QScrollBar *verticalScrollBar;
    QPushButton *WriteButton;
    QPushButton *doneButton;

    void setupUi(QDialog *NewActionT)
    {
        if (NewActionT->objectName().isEmpty())
            NewActionT->setObjectName(QString::fromUtf8("NewActionT"));
        NewActionT->resize(653, 323);
        addNewActionButton = new QPushButton(NewActionT);
        addNewActionButton->setObjectName(QString::fromUtf8("addNewActionButton"));
        addNewActionButton->setGeometry(QRect(0, 0, 111, 41));
        title_label = new QLabel(NewActionT);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(110, 90, 421, 17));
        ReadButton = new QPushButton(NewActionT);
        ReadButton->setObjectName(QString::fromUtf8("ReadButton"));
        ReadButton->setGeometry(QRect(10, 120, 80, 25));
        planArea = new QTextEdit(NewActionT);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(107, 113, 431, 211));
        verticalScrollBar = new QScrollBar(NewActionT);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(520, 110, 16, 211));
        verticalScrollBar->setOrientation(Qt::Vertical);
        WriteButton = new QPushButton(NewActionT);
        WriteButton->setObjectName(QString::fromUtf8("WriteButton"));
        WriteButton->setGeometry(QRect(10, 160, 80, 25));
        doneButton = new QPushButton(NewActionT);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(560, 280, 61, 25));

        retranslateUi(NewActionT);

        QMetaObject::connectSlotsByName(NewActionT);
    } // setupUi

    void retranslateUi(QDialog *NewActionT)
    {
        NewActionT->setWindowTitle(QApplication::translate("NewActionT", "Dialog", 0, QApplication::UnicodeUTF8));
        addNewActionButton->setText(QApplication::translate("NewActionT", "Problem", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("NewActionT", "title", 0, QApplication::UnicodeUTF8));
        ReadButton->setText(QApplication::translate("NewActionT", "Read", 0, QApplication::UnicodeUTF8));
        WriteButton->setText(QApplication::translate("NewActionT", "Write", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("NewActionT", "Done", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NewActionT: public Ui_NewActionT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACTIONT_H
