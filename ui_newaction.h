/********************************************************************************
** Form generated from reading UI file 'newaction.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWACTION_H
#define UI_NEWACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_file1
{
public:
    QScrollBar *verticalScrollBar;
    QLabel *title_label;
    QPushButton *ReadButton;
    QPushButton *WriteButton;
    QPushButton *doneButton;
    QPushButton *addNewActionButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *file1)
    {
        if (file1->objectName().isEmpty())
            file1->setObjectName(QString::fromUtf8("file1"));
        file1->resize(621, 343);
        verticalScrollBar = new QScrollBar(file1);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(460, 100, 16, 241));
        verticalScrollBar->setOrientation(Qt::Vertical);
        title_label = new QLabel(file1);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(140, 80, 351, 17));
        ReadButton = new QPushButton(file1);
        ReadButton->setObjectName(QString::fromUtf8("ReadButton"));
        ReadButton->setGeometry(QRect(10, 110, 89, 25));
        WriteButton = new QPushButton(file1);
        WriteButton->setObjectName(QString::fromUtf8("WriteButton"));
        WriteButton->setGeometry(QRect(10, 150, 89, 25));
        doneButton = new QPushButton(file1);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(548, 300, 61, 25));
        addNewActionButton = new QPushButton(file1);
        addNewActionButton->setObjectName(QString::fromUtf8("addNewActionButton"));
        addNewActionButton->setGeometry(QRect(0, 0, 121, 41));
        plainTextEdit = new QPlainTextEdit(file1);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(210, 100, 251, 241));

        retranslateUi(file1);

        QMetaObject::connectSlotsByName(file1);
    } // setupUi

    void retranslateUi(QDialog *file1)
    {
        file1->setWindowTitle(QApplication::translate("file1", "Dialog", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("file1", "title", 0, QApplication::UnicodeUTF8));
        ReadButton->setText(QApplication::translate("file1", "Read", 0, QApplication::UnicodeUTF8));
        WriteButton->setText(QApplication::translate("file1", "Write", 0, QApplication::UnicodeUTF8));
        doneButton->setText(QApplication::translate("file1", "Done", 0, QApplication::UnicodeUTF8));
        addNewActionButton->setText(QApplication::translate("file1", "Domain", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class file1: public Ui_file1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWACTION_H
