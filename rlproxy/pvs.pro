######################################################################
# generated by pvdevelop at: Mo. Okt. 24 14:29:28 2016
######################################################################

TEMPLATE = app
CONFIG  += warn_on release console
CONFIG  -= qt

# Input
HEADERS += pvapp.h
SOURCES += main.cpp \
           readme.cpp 

!macx {
unix:LIBS         += -lpthread -lssl -lcrypto
unix:LIBS         += /usr/lib/librllib.so
unix:INCLUDEPATH  += /opt/pvb/rllib/lib
}

macx:LIBS         += /usr/lib/libpthread.dylib
macx:LIBS         += /usr/lib/librllib.dylib
macx:INCLUDEPATH  += /opt/pvb/rllib/lib

#
# Attention:
# starting with mingw 4.8 we use mingw pthread and not our own mapping to windows threads
# you will have to adjust existing pro files
#
win32-g++ {
QMAKE_LFLAGS      += -static-libgcc
win32:LIBS        += $(PVBDIR)/win-mingw/bin/librllib.a
win32:LIBS        += -lws2_32 -ladvapi32 -lpthread
win32:INCLUDEPATH += $(PVBDIR)/rllib/lib
}

TARGET = rlproxy