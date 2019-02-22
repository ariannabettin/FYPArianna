#-------------------------------------------------
#
# Project created by QtCreator 2019-01-27T17:59:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FYP2019
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        home.cpp \
    gloabal.cpp \
    selection.cpp \
    visualisation.cpp \
    modification.cpp \
    addaction.cpp \
    removeaction.cpp \
    replaceaction.cpp \
    rescheduleaction.cpp \
    changeaction.cpp \
    access.cpp \
    window.cpp \
    beforeafter.cpp \
    fileclass.cpp \
    listofactions.cpp \
    userquestions.cpp \
    comparison.cpp \
    fileclasspf.cpp

HEADERS += \
        home.h \
    gloabal.h \
    selection.h \
    visualisation.h \
    modification.h \
    addaction.h \
    removeaction.h \
    replaceaction.h \
    rescheduleaction.h \
    changeaction.h \
    access.h \
    window.h \
    beforeafter.h \
    fileclass.h \
    listofactions.h \
    userquestions.h \
    comparison.h \
    fileclasspf.h

FORMS += \
        home.ui \
    selection.ui \
    visualisation.ui \
    modification.ui \
    addaction.ui \
    removeaction.ui \
    replaceaction.ui \
    rescheduleaction.ui \
    changeaction.ui \
    access.ui \
    window.ui \
    beforeafter.ui \
    fileclass.ui \
    listofactions.ui \
    userquestions.ui \
    comparison.ui \
    fileclasspf.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
