#-------------------------------------------------
#
# Project created by QtCreator 2019-08-15T20:29:42
#
#-------------------------------------------------

QT       += core gui charts
#LIBS +=-lqwt

#DEFINES += QT_DLL QWT_DLL
#LIBS += -L"D:\Qt\Qt5.8.0\5.8\mingw53_32\lib" -lqwtd
#LIBS += -L"D:\Qt\Qt5.8.0\5.8\mingw53_32\lib" -lqwt
#INCLUDEPATH += D:\Qt\Qt5.8.0\5.8\mingw53_32\include\Qwt

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = widget_test
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
    widget_round.cpp \
    formspectline.cpp

HEADERS  += mainwindow.h \
    widget_round.h \
    formspectline.h

FORMS    += mainwindow.ui \
    formspectline.ui
