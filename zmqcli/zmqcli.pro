#-------------------------------------------------
#
# Project created by QtCreator 2020-10-26T13:15:48
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = zmqcli
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

LIBS += -lzmq
