/********************************************************************************
** Form generated from reading UI file 'invalidplan.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDPLAN_H
#define UI_INVALIDPLAN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_invalidPlan
{
public:
    QPushButton *compareButton;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *selectButton;
    QPushButton *homeButton;
    QPushButton *visualiseButton;
    QPushButton *Button;
    QPushButton *pushButton;
    QPushButton *modifyButton;

    void setupUi(QDialog *invalidPlan)
    {
        if (invalidPlan->objectName().isEmpty())
            invalidPlan->setObjectName(QString::fromUtf8("invalidPlan"));
        invalidPlan->resize(640, 480);
        compareButton = new QPushButton(invalidPlan);
        compareButton->setObjectName(QString::fromUtf8("compareButton"));
        compareButton->setGeometry(QRect(350, 0, 89, 41));
        frame = new QFrame(invalidPlan);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 70, 531, 241));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        QPalette pal;
        pal.setColor(QPalette::Background, Qt::red);
        frame->setAutoFillBackground(true);
        frame->setPalette(pal);
        frame->show();
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        selectButton = new QPushButton(invalidPlan);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        homeButton = new QPushButton(invalidPlan);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        visualiseButton = new QPushButton(invalidPlan);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        Button = new QPushButton(invalidPlan);
        Button->setObjectName(QString::fromUtf8("Button"));
        Button->setGeometry(QRect(280, 0, 71, 41));
        pushButton = new QPushButton(invalidPlan);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 0, 89, 41));
        modifyButton = new QPushButton(invalidPlan);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(210, 0, 71, 41));

        retranslateUi(invalidPlan);

        QMetaObject::connectSlotsByName(invalidPlan);
    } // setupUi

    void retranslateUi(QDialog *invalidPlan)
    {
        invalidPlan->setWindowTitle(QApplication::translate("invalidPlan", "Dialog", 0, QApplication::UnicodeUTF8));
        compareButton->setText(QApplication::translate("invalidPlan", "Compare", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("invalidPlan", "Your plan is INVALID", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("invalidPlan", "Select", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("invalidPlan", "Home", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("invalidPlan", "Visualise", 0, QApplication::UnicodeUTF8));
        Button->setText(QApplication::translate("invalidPlan", "Add", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("invalidPlan", "Validate", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QApplication::translate("invalidPlan", "Modify", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class invalidPlan: public Ui_invalidPlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVALIDPLAN_H
