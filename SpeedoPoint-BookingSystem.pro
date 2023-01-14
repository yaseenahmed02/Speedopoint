QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/account.cpp \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/booking.cpp \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/operation.cpp \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/reservations.cpp \
    account.cpp \
    booking.cpp \
    main.cpp \
    mainwindow.cpp \
    operation.cpp

HEADERS += \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/account.h \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/booking.h \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/operation.h \
    ../../../Qt Project-SpeedoPoint/QT Project/SpeedoPoint/reservations.h \
    ../../../Qt Project-SpeedoPoint/QT Project/build-SpeedoPoint-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/ui_booking.h \
    ../../../Qt Project-SpeedoPoint/QT Project/build-SpeedoPoint-Desktop_Qt_6_0_1_MinGW_64_bit-Debug/ui_mainwindow.h \
    account.h \
    booking.h \
    mainwindow.h \
    operation.h

FORMS += \
    booking.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
