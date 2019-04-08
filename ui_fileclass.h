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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileClass
{
public:
    QPlainTextEdit *planArea;
    QGroupBox *groupBox;
    QPushButton *openFileButton;
    QLabel *label;
    QLabel *title_label;
    QGroupBox *groupBox_2;
    QPushButton *newFile;
    QPushButton *close;
    QPushButton *saveButton;
    QPushButton *replaceButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *fileClass)
    {
        if (fileClass->objectName().isEmpty())
            fileClass->setObjectName(QString::fromUtf8("fileClass"));
        fileClass->resize(795, 593);
        fileClass->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        planArea = new QPlainTextEdit(fileClass);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(260, 160, 491, 351));
        groupBox = new QGroupBox(fileClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 341, 61));
        openFileButton = new QPushButton(groupBox);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setGeometry(QRect(10, 30, 141, 25));
        label = new QLabel(fileClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 130, 81, 17));
        title_label = new QLabel(fileClass);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(350, 130, 391, 17));
        groupBox_2 = new QGroupBox(fileClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 140, 201, 181));
        newFile = new QPushButton(groupBox_2);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setGeometry(QRect(30, 90, 141, 25));
        close = new QPushButton(groupBox_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(30, 140, 141, 25));
        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(30, 40, 141, 25));
        replaceButton = new QPushButton(fileClass);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(60, 450, 141, 25));
        widget = new QWidget(fileClass);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 380, 181, 62));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        retranslateUi(fileClass);

        QMetaObject::connectSlotsByName(fileClass);
    } // setupUi

    void retranslateUi(QDialog *fileClass)
    {
        fileClass->setWindowTitle(QApplication::translate("fileClass", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("fileClass", "Use this button to open the domain file:", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("fileClass", "Open Original File", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fileClass", "Domain of:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("fileClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("fileClass", "New file buttons:", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("fileClass", "Open new File", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("fileClass", "Close", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("fileClass", "Save", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("fileClass", "Replace", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fileClass", "Use the plan showed in ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("fileClass", " the the text area", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("fileClass", " for this session:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fileClass: public Ui_fileClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECLASS_H
