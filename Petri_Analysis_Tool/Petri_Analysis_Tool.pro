#-------------------------------------------------
#
# Project created by QtCreator 2019-07-01T21:46:27
#
#-------------------------------------------------

DEFINES  -= UNICODE
QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Petri_Analysis_Tool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    globals.cpp \
    load_place.cpp \
    match_place.cpp \
    PCIE.cpp

HEADERS  += mainwindow.h \
    globals.h \
    load_place.h \
    match_place.h \
    PCIE.h

FORMS    += mainwindow.ui \
    load_place.ui \
    match_place.ui
