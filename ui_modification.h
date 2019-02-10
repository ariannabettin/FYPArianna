/********************************************************************************
** Form generated from reading UI file 'modification.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICATION_H
#define UI_MODIFICATION_H

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

class Ui_Modification
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *modifyButton;
    QPushButton *removeButton;
    QPushButton *replaceButton;
    QPushButton *rescheduleButton;
    QPushButton *changeButton;
    QPushButton *accessButton;
    QTextEdit *planArea;
    QLabel *title_label;
    QPushButton *valButton;
    QPushButton *addButton;
    QScrollBar *verticalScrollBar;

    void setupUi(QDialog *Modification)
    {
        if (Modification->objectName().isEmpty())
            Modification->setObjectName(QString::fromUtf8("Modification"));
        Modification->resize(640, 480);
        homeButton = new QPushButton(Modification);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Modification);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Modification);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        modifyButton = new QPushButton(Modification);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));
        removeButton = new QPushButton(Modification);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));
        removeButton->setGeometry(QRect(0, 70, 111, 31));
        replaceButton = new QPushButton(Modification);
        replaceButton->setObjectName(QString::fromUtf8("replaceButton"));
        replaceButton->setGeometry(QRect(0, 100, 111, 31));
        rescheduleButton = new QPushButton(Modification);
        rescheduleButton->setObjectName(QString::fromUtf8("rescheduleButton"));
        rescheduleButton->setGeometry(QRect(0, 130, 111, 31));
        changeButton = new QPushButton(Modification);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(0, 160, 111, 31));
        accessButton = new QPushButton(Modification);
        accessButton->setObjectName(QString::fromUtf8("accessButton"));
        accessButton->setGeometry(QRect(0, 190, 111, 31));
        planArea = new QTextEdit(Modification);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(130, 130, 381, 351));
        title_label = new QLabel(Modification);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(140, 110, 67, 17));
        valButton = new QPushButton(Modification);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(570, 440, 51, 31));
        addButton = new QPushButton(Modification);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(0, 40, 111, 31));
        verticalScrollBar = new QScrollBar(Modification);
        verticalScrollBar->setObjectName(QString::fromUtf8("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(500, 130, 16, 351));
        verticalScrollBar->setOrientation(Qt::Vertical);

        retranslateUi(Modification);

        QMetaObject::connectSlotsByName(Modification);
    } // setupUi

    void retranslateUi(QDialog *Modification)
    {
        Modification->setWindowTitle(QApplication::translate("Modification", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Modification", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Modification", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Modification", "Visualise", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("Modification", "Modify", 0, QApplication::UnicodeUTF8));
        removeButton->setText(QApplication::translate("Modification", "Remove", 0, QApplication::UnicodeUTF8));
        replaceButton->setText(QApplication::translate("Modification", "Replace", 0, QApplication::UnicodeUTF8));
        rescheduleButton->setText(QApplication::translate("Modification", "Reschedule", 0, QApplication::UnicodeUTF8));
        changeButton->setText(QApplication::translate("Modification", "Change", 0, QApplication::UnicodeUTF8));
        accessButton->setText(QApplication::translate("Modification", "Access File", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Modification", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("Modification", "VAL", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("Modification", "Add", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Modification: public Ui_Modification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICATION_H
