#-------------------------------------------------
#
# Project created by QtCreator 2014-07-08T15:30:09
#
#-------------------------------------------------

QT       += core gui webkitwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ContentFromVkCom
TEMPLATE = app


SOURCES += main.cpp\
        Dialog.cpp

HEADERS  += Dialog.h \
    VKAuth.h \
    Authorization.h

FORMS    += Dialog.ui
