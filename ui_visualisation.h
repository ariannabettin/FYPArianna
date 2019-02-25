/********************************************************************************
** Form generated from reading UI file 'visualisation.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALISATION_H
#define UI_VISUALISATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Visualisation
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QPushButton *valButton;
    QFrame *frame;
    QPushButton *questionButton;
    QLabel *stetement1;
    QLabel *title_label;
    QTextEdit *planArea;
    QFrame *frame_2;
    QLabel *stetement1_2;
    QPushButton *modifyButton;
    QFrame *frame_3;
    QLabel *stetement1_3;
    QPushButton *addNewButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QDialog *Visualisation)
    {
        if (Visualisation->objectName().isEmpty())
            Visualisation->setObjectName(QString::fromUtf8("Visualisation"));
        Visualisation->resize(640, 480);
        homeButton = new QPushButton(Visualisation);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        selectButton = new QPushButton(Visualisation);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        visualiseButton = new QPushButton(Visualisation);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        valButton = new QPushButton(Visualisation);
        valButton->setObjectName(QString::fromUtf8("valButton"));
        valButton->setGeometry(QRect(560, 430, 51, 31));
        frame = new QFrame(Visualisation);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 50, 221, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        questionButton = new QPushButton(frame);
        questionButton->setObjectName(QString::fromUtf8("questionButton"));
        questionButton->setGeometry(QRect(80, 30, 71, 71));
        stetement1 = new QLabel(frame);
        stetement1->setObjectName(QString::fromUtf8("stetement1"));
        stetement1->setGeometry(QRect(60, 0, 121, 21));
        title_label = new QLabel(Visualisation);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(130, 180, 379, 17));
        planArea = new QTextEdit(Visualisation);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(120, 200, 401, 281));
        frame_2 = new QFrame(Visualisation);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(220, 50, 211, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stetement1_2 = new QLabel(frame_2);
        stetement1_2->setObjectName(QString::fromUtf8("stetement1_2"));
        stetement1_2->setGeometry(QRect(40, 0, 121, 21));
        modifyButton = new QPushButton(frame_2);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(70, 30, 71, 71));
        frame_3 = new QFrame(Visualisation);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(430, 50, 211, 111));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        stetement1_3 = new QLabel(frame_3);
        stetement1_3->setObjectName(QString::fromUtf8("stetement1_3"));
        stetement1_3->setGeometry(QRect(50, 0, 231, 21));
        addNewButton = new QPushButton(frame_3);
        addNewButton->setObjectName(QString::fromUtf8("addNewButton"));
        addNewButton->setGeometry(QRect(70, 30, 71, 71));
        verticalLayoutWidget = new QWidget(Visualisation);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 160, 121, 351));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(Visualisation);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(519, 160, 121, 271));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(Visualisation);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(519, 459, 121, 21));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Visualisation);

        QMetaObject::connectSlotsByName(Visualisation);
    } // setupUi

    void retranslateUi(QDialog *Visualisation)
    {
        Visualisation->setWindowTitle(QApplication::translate("Visualisation", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Visualisation", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Visualisation", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Visualisation", "Visualise", 0, QApplication::UnicodeUTF8));
        valButton->setText(QApplication::translate("Visualisation", "VAL", 0, QApplication::UnicodeUTF8));
        questionButton->setText(QString());
        stetement1->setText(QApplication::translate("Visualisation", " Ask a questions:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Visualisation", "TextLabel", 0, QApplication::UnicodeUTF8));
        stetement1_2->setText(QApplication::translate("Visualisation", "Modify your plan:", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QString());
        stetement1_3->setText(QApplication::translate("Visualisation", " Load a new plan:", 0, QApplication::UnicodeUTF8));
        addNewButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Visualisation: public Ui_Visualisation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATION_H
