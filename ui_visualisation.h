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

QT_BEGIN_NAMESPACE

class Ui_Visualisation
{
public:
    QPushButton *homeButton;
    QPushButton *selectButton;
    QPushButton *visualiseButton;
    QFrame *frame;
    QPushButton *questionButton;
    QLabel *stetement1;
    QLabel *title_label;
    QTextEdit *planArea;
    QFrame *frame_2;
    QLabel *stetement1_2;
    QPushButton *modifyButton;
    QFrame *frame_3;
    QPushButton *accessFile;
    QLabel *stetement1_3;
    QPushButton *reloadButton;
    QPushButton *backButton;

    void setupUi(QDialog *Visualisation)
    {
        if (Visualisation->objectName().isEmpty())
            Visualisation->setObjectName(QString::fromUtf8("Visualisation"));
        Visualisation->resize(798, 638);
        homeButton = new QPushButton(Visualisation);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(0, 0, 71, 41));
        homeButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        selectButton = new QPushButton(Visualisation);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(70, 0, 71, 41));
        selectButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        visualiseButton = new QPushButton(Visualisation);
        visualiseButton->setObjectName(QString::fromUtf8("visualiseButton"));
        visualiseButton->setGeometry(QRect(140, 0, 71, 41));
        visualiseButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame = new QFrame(Visualisation);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 50, 221, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        questionButton = new QPushButton(frame);
        questionButton->setObjectName(QString::fromUtf8("questionButton"));
        questionButton->setGeometry(QRect(80, 30, 71, 71));
        stetement1 = new QLabel(frame);
        stetement1->setObjectName(QString::fromUtf8("stetement1"));
        stetement1->setGeometry(QRect(50, 10, 131, 21));
        stetement1->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        title_label = new QLabel(Visualisation);
        title_label->setObjectName(QString::fromUtf8("title_label"));
        title_label->setGeometry(QRect(170, 190, 491, 17));
        title_label->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";\n"
"border-color: rgb(92, 53, 102);"));
        planArea = new QTextEdit(Visualisation);
        planArea->setObjectName(QString::fromUtf8("planArea"));
        planArea->setGeometry(QRect(170, 220, 491, 331));
        planArea->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame_2 = new QFrame(Visualisation);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(310, 50, 211, 111));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        stetement1_2 = new QLabel(frame_2);
        stetement1_2->setObjectName(QString::fromUtf8("stetement1_2"));
        stetement1_2->setGeometry(QRect(40, 10, 141, 21));
        stetement1_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        modifyButton = new QPushButton(frame_2);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(70, 30, 71, 71));
        frame_3 = new QFrame(Visualisation);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(520, 50, 211, 111));
        frame_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        accessFile = new QPushButton(frame_3);
        accessFile->setObjectName(QString::fromUtf8("accessFile"));
        accessFile->setGeometry(QRect(70, 30, 71, 71));
        stetement1_3 = new QLabel(frame_3);
        stetement1_3->setObjectName(QString::fromUtf8("stetement1_3"));
        stetement1_3->setGeometry(QRect(50, 10, 121, 21));
        reloadButton = new QPushButton(Visualisation);
        reloadButton->setObjectName(QString::fromUtf8("reloadButton"));
        reloadButton->setGeometry(QRect(610, 230, 31, 31));
        backButton = new QPushButton(Visualisation);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(690, 10, 89, 25));
        backButton->setStyleSheet(QString::fromUtf8("font: 75 12pt \"TakaoPGothic\";"));

        retranslateUi(Visualisation);

        QMetaObject::connectSlotsByName(Visualisation);
    } // setupUi

    void retranslateUi(QDialog *Visualisation)
    {
        Visualisation->setWindowTitle(QApplication::translate("Visualisation", "Dialog", 0, QApplication::UnicodeUTF8));
        homeButton->setText(QApplication::translate("Visualisation", "Home", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("Visualisation", "Select", 0, QApplication::UnicodeUTF8));
        visualiseButton->setText(QApplication::translate("Visualisation", "Visualise", 0, QApplication::UnicodeUTF8));
        questionButton->setText(QString());
        stetement1->setText(QApplication::translate("Visualisation", " Ask a questions:", 0, QApplication::UnicodeUTF8));
        title_label->setText(QApplication::translate("Visualisation", "TextLabel", 0, QApplication::UnicodeUTF8));
        stetement1_2->setText(QApplication::translate("Visualisation", "Modify your plan:", 0, QApplication::UnicodeUTF8));
        modifyButton->setText(QString());
        accessFile->setText(QString());
        stetement1_3->setText(QApplication::translate("Visualisation", "Access your files:", 0, QApplication::UnicodeUTF8));
        reloadButton->setText(QString());
        backButton->setText(QApplication::translate("Visualisation", "go back", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Visualisation: public Ui_Visualisation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALISATION_H
