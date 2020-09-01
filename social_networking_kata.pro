TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        helper.cpp \
        main.cpp \
        message.cpp \
        mysocial.cpp

HEADERS += \
        helper.h \
        message.h \
        mysocial.h

DISTFILES += \
    gpl-3.0.txt \
    readme.txt
