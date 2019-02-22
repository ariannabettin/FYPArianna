/********************************************************************************
** Form generated from reading UI file 'fileclasspf.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECLASSPF_H
#define UI_FILECLASSPF_H

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

class Ui_fileclassPF
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QPushButton *newFile;
    QPushButton *close;
    QPushButton *writeButton;
    QLabel *label_4;
    QPlainTextEdit *planArea;
    QLabel *label;
    QLabel *title_label;
    QPushButton *replaceButton;
    QGroupBox *groupBox;
    QPushButton *readButton;

    void setupUi(QDialog *fileclassPF)
    {
        if (fileclassPF->objectName().isEmpty())
            fileclassPF->setObjectName(QString::fromUtf8("fileclassPF"));
        fileclassPF->resize(640, 480);
        label_2 = new QLabel(fileclassPF);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 340, 161, 17));
        label_3 = new QLabel(fileclassPF);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 360, 121, 20));
        groupBox_2 = new QGroupBox(fileclassPF);
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
        label_4 = new QLabel(fileclassPF);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 380, 111, 20));
        planArea = new QPlainTextEdit(fileclassPF);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(190, 140, 371, 341));
        label = new QLabel(fileclassPF);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 120, 111, 17));
        title_label = new QLabel(fileclassPF);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(300, 120, 251, 17));
        replaceButton = new QPushButton(fileclassPF);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(30, 410, 111, 25));
        groupBox = new QGroupBox(fileclassPF);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 291, 61));
        readButton = new QPushButton(groupBox);
        readButton->setObjectName(QString::fromUtf8("readButton"));
        readButton->setGeometry(QRect(10, 30, 89, 25));

        retranslateUi(fileclassPF);

        QMetaObject::connectSlotsByName(fileclassPF);
    } // setupUi

    void retranslateUi(QDialog *fileclassPF)
    {
        fileclassPF->setWindowTitle(QApplication::translate("fileclassPF", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fileclassPF", "Use the plan showed in ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("fileclassPF", " the the text area", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("fileclassPF", "New file buttons:", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("fileclassPF", "Open new File", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("fileclassPF", "Close", 0, QApplication::UnicodeUTF8));
        writeButton->setText(QApplication::translate("fileclassPF", "Save", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("fileclassPF", " for this session:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fileclassPF", "Problem file of:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("fileclassPF", "TextLabel", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("fileclassPF", "Replace", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("fileclassPF", "Use this button to open the domain file:", 0, QApplication::UnicodeUTF8));
        readButton->setText(QApplication::translate("fileclassPF", "Open File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fileclassPF: public Ui_fileclassPF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECLASSPF_H
