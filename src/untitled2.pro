TEMPLATE = app

QT += qml quick

SOURCES += main.cpp \
    MyClass.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    MyClass.h

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../usr/lib/release/ -lwiringPi
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../usr/lib/debug/ -lwiringPi
else:unix: LIBS += -L$$PWD/../../../usr/lib/ -lwiringPi

INCLUDEPATH += $$PWD/../../../usr/include
DEPENDPATH += $$PWD/../../../usr/include
