TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        card.cpp \
        dealer.cpp \
        deck.cpp \
        game.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    card.h \
    dealer.h \
    deck.h \
    game.h \
    player.h
