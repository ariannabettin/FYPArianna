/********************************************************************************
** Form generated from reading UI file 'fileclass.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECLASS_H
#define UI_FILECLASS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollBar>

QT_BEGIN_NAMESPACE

class Ui_fileClass
{
public:
    QPlainTextEdit *plainTextEdit;
    QGroupBox *groupBox;
    QPushButton *readButton;
    QLabel *label;
    QLabel *title_label;
    QGroupBox *groupBox_2;
    QPushButton *newFile;
    QPushButton *close;
    QPushButton *writeButton;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *fileClass)
    {
        if (fileClass->objectName().isEmpty())
            fileClass->setObjectName(QString::fromUtf8("fileClass"));
        fileClass->resize(640, 480);
        plainTextEdit = new QPlainTextEdit(fileClass);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(190, 140, 371, 341));
        groupBox = new QGroupBox(fileClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 291, 61));
        readButton = new QPushButton(groupBox);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setGeometry(QRect(10, 30, 89, 25));
        label = new QLabel(fileClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 120, 81, 17));
        title_label = new QLabel(fileClass);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(270, 120, 251, 17));
        groupBox_2 = new QGroupBox(fileClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 120, 131, 181));
        newFile = new QPushButton(groupBox_2);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setGeometry(QRect(10, 90, 111, 25));
        close = new QPushButton(groupBox_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(20, 140, 89, 25));
        writeButton = new QPushButton(groupBox_2);
        writeButton->setObjectName(QString::fromUtf8("writeButton"));
        writeButton->setGeometry(QRect(20, 40, 89, 25));
        verticalScrollBar = new QScrollBar(fileClass);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(550, 140, 16, 341));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(fileClass);

        QMetaObject::connectSlotsByName(fileClass);
    } // setupUi

    void retranslateUi(QDialog *fileClass)
    {
        fileClass->setWindowTitle(QApplication::translate("fileClass", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("fileClass", "Use this button to open the domain file:", 0, QApplication::UnicodeUTF8));
        readButton->setText(QApplication::translate("fileClass", "Open File", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fileClass", "Domain of:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("fileClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("fileClass", "New file buttons:", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("fileClass", "Open new File", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("fileClass", "Close", 0, QApplication::UnicodeUTF8));
        writeButton->setText(QApplication::translate("fileClass", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fileClass: public Ui_fileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECLASS_H
