#-------------------------------------------------
#
# Project created by QtCreator 2019-11-29T14:27:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = animebase
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
        anime.cpp \
        anime10.cpp \
        anime24.cpp \
        base.cpp \
        full_anime.cpp \
        main.cpp \
        mainwindow.cpp \
        manga.cpp \
        ranobe.cpp \
        ranobe_ln.cpp \
        ranobe_wb.cpp \
        title.cpp \
        universe.cpp

HEADERS += \
        anime.h \
        anime10.h \
        anime24.h \
        base.h \
        errorconfig.h \
        full_anime.h \
        mainwindow.h \
        manga.h \
        ranobe.h \
        ranobe_ln.h \
        ranobe_wb.h \
        title.h \
        universe.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
