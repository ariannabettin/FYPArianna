/********************************************************************************
** Form generated from reading UI file 'comparison.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPARISON_H
#define UI_COMPARISON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Comparison
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *compareButton;
    QTextEdit *planArea;
    QTextEdit *planArea_2;
    QLabel *title_label;
    QLabel *title_label2;
    QPushButton *valButton;
    QPushButton *saveButton;
    QLabel *instruction;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *noChangesButton;
    QPushButton *newsButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *replacedButton;
    QPushButton *removedButton;
    QLabel *label;

    void setupUi(QDialog *Comparison)
    {
        if (Comparison->objectName().isEmpty())
            Comparison->setObjectName(QString::fromUtf8("Comparison"));
        Comparison->resize(640, 480);
        Comparison->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        homeButton = new QPushButton(Comparison);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Comparison);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Comparison);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        compareButton = new QPushButton(Comparison);
        compareButton->setObjectName(QString::fromUtf8("compareButton"));
        compareButton->setGeometry(QRect(210, 0, 89, 41));
        planArea = new QTextEdit(Comparison);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(20, 200, 291, 281));
        planArea_2 = new QTextEdit(Comparison);
        planArea_2->setObjectName(QString::fromUtf8("planArea_2"));
        planArea_2->setGeometry(QRect(330, 200, 281, 281));
        title_label = new QLabel(Comparison);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(20, 170, 281, 17));
        title_label2 = new QLabel(Comparison);
        title_label2->setObjectName(QString::fromUtf8("title_label2"));
        title_label2->setGeometry(QRect(330, 170, 281, 17));
        valButton = new QPushButton(Comparison);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(550, 10, 61, 31));
        saveButton = new QPushButton(Comparison);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(550, 60, 61, 31));
        instruction = new QLabel(Comparison);
        instruction->setObjectName(QString::fromUtf8("instruction"));
        instruction->setGeometry(QRect(10, 50, 531, 17));
        layoutWidget = new QWidget(Comparison);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 100, 531, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        noChangesButton = new QPushButton(layoutWidget);
        noChangesButton->setObjectName(QString::fromUtf8("noChangesButton"));

        horizontalLayout->addWidget(noChangesButton);

        newsButton = new QPushButton(layoutWidget);
        newsButton->setObjectName(QString::fromUtf8("newsButton"));

        horizontalLayout->addWidget(newsButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        replacedButton = new QPushButton(layoutWidget);
        replacedButton->setObjectName(QString::fromUtf8("replacedButton"));

        horizontalLayout_2->addWidget(replacedButton);

        removedButton = new QPushButton(layoutWidget);
        removedButton->setObjectName(QString::fromUtf8("removedButton"));

        horizontalLayout_2->addWidget(removedButton);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(Comparison);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 521, 17));

        retranslateUi(Comparison);
        QObject::connect(saveButton, SIGNAL(clicked()), planArea_2, SLOT(clear()));

        QMetaObject::connectSlotsByName(Comparison);
    } // setupUi

    void retranslateUi(QDialog *Comparison)
    {
        Comparison->setWindowTitle(QApplication::translate("Comparison", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Comparison", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Comparison", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Comparison", "Visualise", 0, QApplication::UnicodeUTF8));
        compareButton->setText(QApplication::translate("Comparison", "Compare", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Comparison", "TextLabel", 0, QApplication::UnicodeUTF8));
        title_label2->setText(QApplication::translate("Comparison", "TextLabel", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("Comparison", "VAL", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("Comparison", "Save", 0, QApplication::UnicodeUTF8));
        instruction->setText(QApplication::translate("Comparison", "Please, save the plan if you want to keep working on it after the modification.", 0, QApplication::UnicodeUTF8));
        noChangesButton->setText(QApplication::translate("Comparison", "What has not changed?", 0, QApplication::UnicodeUTF8));
        newsButton->setText(QApplication::translate("Comparison", "What is new?", 0, QApplication::UnicodeUTF8));
        replacedButton->setText(QApplication::translate("Comparison", "What has been replaced?", 0, QApplication::UnicodeUTF8));
        removedButton->setText(QApplication::translate("Comparison", "What's has been removed?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Comparison", "If this is your final version, validate the new XPlan with VAL button.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Comparison: public Ui_Comparison {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPARISON_H
