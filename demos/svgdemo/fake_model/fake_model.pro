######################################################################
# Automatically generated by qmake (2.01a) Di Apr 17 10:37:14 2007
######################################################################

TEMPLATE          = app
TARGET            = fake_model
CONFIG           += warn_on release console
CONFIG           -= qt
unix:DEPENDPATH  += .
unix:INCLUDEPATH += .
unix:INCLUDEPATH += ..


# Input
unix:HEADERS     += ../xchange.h
SOURCES          += main.cpp
unix:LIBS        += /usr/lib/librllib.so

!macx {
unix:LIBS        += -lpthread
unix:INCLUDEPATH += /opt/pvb/rllib/lib
}

macx:LIBS += /usr/lib/libpthread.dylib
macx:INCLUDEPATH += /opt/pvb/rllib/lib

win32:QMAKE_LFLAGS += -static-libgcc
