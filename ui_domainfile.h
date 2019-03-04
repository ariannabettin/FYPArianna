/********************************************************************************
** Form generated from reading UI file 'domainfile.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOMAINFILE_H
#define UI_DOMAINFILE_H

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

QT_BEGIN_NAMESPACE

class Ui_domainFile
{
public:
    QPlainTextEdit *planArea;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *openFileButton;
    QLabel *title_label;
    QGroupBox *groupBox_2;
    QPushButton *newFile;
    QPushButton *close;
    QPushButton *saveButton;

    void setupUi(QDialog *domainFile)
    {
        if (domainFile->objectName().isEmpty())
            domainFile->setObjectName(QString::fromUtf8("domainFile"));
        domainFile->resize(640, 480);
        planArea = new QPlainTextEdit(domainFile);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(190, 150, 371, 341));
        label = new QLabel(domainFile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 130, 81, 17));
        groupBox = new QGroupBox(domainFile);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 40, 291, 61));
        openFileButton = new QPushButton(groupBox);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setGeometry(QRect(10, 30, 141, 25));
        title_label = new QLabel(domainFile);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(270, 130, 251, 17));
        groupBox_2 = new QGroupBox(domainFile);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 130, 131, 181));
        newFile = new QPushButton(groupBox_2);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setGeometry(QRect(10, 90, 111, 25));
        close = new QPushButton(groupBox_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(20, 140, 89, 25));
        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(20, 40, 89, 25));

        retranslateUi(domainFile);

        QMetaObject::connectSlotsByName(domainFile);
    } // setupUi

    void retranslateUi(QDialog *domainFile)
    {
        domainFile->setWindowTitle(QApplication::translate("domainFile", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("domainFile", "Domain of:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("domainFile", "Use this button to open the domain file:", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("domainFile", "Open Original File", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("domainFile", "TextLabel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("domainFile", "New file buttons:", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("domainFile", "Open new File", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("domainFile", "Close", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("domainFile", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class domainFile: public Ui_domainFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOMAINFILE_H
