QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = SquareButton
TEMPLATE = app
SOURCES += main.cpp\
        dialog.cpp \
    squarebutton.cpp
HEADERS  += dialog.h \
    squarebutton.h
FORMS    += dialog.ui
