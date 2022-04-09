QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    map/yzy/map.cpp \
    ui/src/mainwindow.cpp


HEADERS += \
    map/Node.h \
    map/yzy/map.h \
    ui/src/mainwindow.h


FORMS += \
    ui/qt_ui/mainwindow.ui



TRANSLATIONS += \
    IKUNGuiding_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \

RESOURCES += \
    ui/resources/resources.qrc

