﻿#ifndef CONVERTER_H
#define CONVERTER_H

#include <QObject>
#include "menu_dialog.h"

class Converter : public QObject
{
    Q_OBJECT
public:
    explicit Converter(QObject *parent = nullptr);
    menu_dialog *menu;

    char input;
    char baseA;
    char baseB;

    void start();
    int BaseBtoDecimal(char);
    char decimalToBaseB(int);
    int toDecimal(QString, int);
    QString toBaseB(int,int);

signals:


public slots:
    void validateInput(QString,QString,QString);

};

#endif // CONVERTER_H
