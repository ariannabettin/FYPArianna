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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileclassPF
{
public:
    QGroupBox *groupBox_2;
    QPushButton *newFile;
    QPushButton *close;
    QPushButton *saveButton;
    QPlainTextEdit *planArea;
    QLabel *label;
    QLabel *title_label;
    QPushButton *replaceButton;
    QGroupBox *groupBox;
    QPushButton *openFileButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *fileclassPF)
    {
        if (fileclassPF->objectName().isEmpty())
            fileclassPF->setObjectName(QString::fromUtf8("fileclassPF"));
        fileclassPF->resize(795, 587);
        fileclassPF->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        groupBox_2 = new QGroupBox(fileclassPF);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(30, 120, 201, 181));
        newFile = new QPushButton(groupBox_2);
        newFile->setObjectName(QString::fromUtf8("newFile"));
        newFile->setGeometry(QRect(30, 90, 141, 25));
        close = new QPushButton(groupBox_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(30, 140, 141, 25));
        saveButton = new QPushButton(groupBox_2);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(30, 40, 141, 25));
        planArea = new QPlainTextEdit(fileclassPF);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(380, 140, 371, 401));
        label = new QLabel(fileclassPF);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 40, 111, 17));
        title_label = new QLabel(fileclassPF);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(560, 70, 251, 17));
        replaceButton = new QPushButton(fileclassPF);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(60, 470, 141, 25));
        groupBox = new QGroupBox(fileclassPF);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 341, 61));
        openFileButton = new QPushButton(groupBox);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setGeometry(QRect(10, 30, 141, 25));
        widget = new QWidget(fileclassPF);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 400, 181, 62));
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


        retranslateUi(fileclassPF);

        QMetaObject::connectSlotsByName(fileclassPF);
    } // setupUi

    void retranslateUi(QDialog *fileclassPF)
    {
        fileclassPF->setWindowTitle(QApplication::translate("fileclassPF", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("fileclassPF", "New file buttons:", 0, QApplication::UnicodeUTF8));
        newFile->setText(QApplication::translate("fileclassPF", "Open new File", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("fileclassPF", "Close", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("fileclassPF", "Save", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("fileclassPF", "Problem file of:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("fileclassPF", "TextLabel", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("fileclassPF", "Replace", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("fileclassPF", "Use this button to open the domain file:", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("fileclassPF", "Open Original File", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("fileclassPF", "Use the plan showed in ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("fileclassPF", " the the text area", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("fileclassPF", " for this session:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class fileclassPF: public Ui_fileclassPF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECLASSPF_H
