QT       = core gui
%NETWORK%QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
SOURCES += main.cpp \
    composemail.cpp \
    mailclient.cpp \
    datamodell.cpp

HEADERS += \
    composemail.h \
    mailclient.h \
    datamodell.h
