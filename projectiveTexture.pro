QT += core gui opengl xml
QMAKE_CXXFLAGS += -std=gnu++11
TARGET = projectiveTexture
TEMPLATE = app

HEADERS += \
    include/*.h

SOURCES += \
    src/*.cpp

FORMS += \
    gui/mainWindow.ui

INCLUDEPATH += include

LIBS += -lQGLViewer -lGL -lGLU -lGLEW

OBJECTS_DIR = build
MOC_DIR = build
UI_DIR = build
DESTDIR = .
