#-------------------------------------------------
#
# Project created by QtCreator 2020-06-01T13:07:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

LIBS+=-L"C:\Users\RedDrako\Downloads\SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit\SFML-2.5.1\lib"

CONFIG(release, debug|release): LIBS += -libsfml-audio -libsfml-graphics -libsfml-main -libsfml-network -libsfml-window -libsfml-system

CONFIG(debug, debug|release): LIBS += -libsfml-audio-d -libsfml-graphics-d -libsfml-main-d -libsfml-network-d -libsfml-window-d -libsfml-system-d

INCLUDEPATH+=C:\Users\RedDrako\Downloads\SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit\SFML-2.5.1\lib

DEPENDPATH+=C:\Users\RedDrako\Downloads\SFML-2.5.1-windows-gcc-7.3.0-mingw-64-bit\SFML-2.5.1\lib

TARGET = rgz
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
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
