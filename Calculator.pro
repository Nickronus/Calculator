TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Ioperation.cpp \
        calculator.cpp \
        divideoperation.cpp \
        factoryoperations.cpp \
        ifactoryoperations.cpp \
        main.cpp \
        minusoperation.cpp \
        multiplyoperation.cpp \
        plusoperation.cpp

HEADERS += \
    Ioperation.h \
    calculator.h \
    divideoperation.h \
    factoryoperations.h \
    ifactoryoperations.h \
    minusoperation.h \
    multiplyoperation.h \
    plusoperation.h
