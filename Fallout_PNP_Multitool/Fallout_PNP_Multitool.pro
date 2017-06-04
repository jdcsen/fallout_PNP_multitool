#-------------------------------------------------
#
# Project created by QtCreator 2017-06-04T14:09:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Fallout_PNP_Multitool
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    character_builder.cpp

HEADERS  += mainwindow.h \
    model/I_weapon.h \
    model/I_character.h \
    model/I_armor.h \
    model/I_item.h \
    character_builder.h

FORMS    += mainwindow.ui \
    character_builder.ui
