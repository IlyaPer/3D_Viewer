QT       += core gui opengl openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

include(giflib/src/gifimage/qtgifimage.pri)

CONFIG += c++17 qt thread debug

*g++*:QMAKE_CXXFLAGS += -std=c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../Model/object.cc \
    ../Model/model.cc \
    ../Model/glwidget.cpp \
    ../command.cpp \
    ../controller/Controller.cc \
    main.cpp \
    mainwindow.cpp \

HEADERS += \
    ../Model/object.h \
    ../Model/model.h \
    ../Model/glwidget.h \
    mainwindow.h \
    ../command.h \
    ../controller/controller.h

# HEADERS += \
#     View/glwidget.h \
#     View/mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
