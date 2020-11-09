#-------------------------------------------------
#
# Project created by QtCreator 2020-10-26T13:41:12
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = zmqser
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

LIBS += -lzmq
