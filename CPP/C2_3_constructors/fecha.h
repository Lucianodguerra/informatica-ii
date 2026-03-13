#ifndef FECHA_H
#define FECHA_H

#include <iostream>
class cFecha
{
    int dia{};
    int mes{};
    int anho{};
public:
    cFecha();
    cFecha (int day, int month = 1, int year = 1999);
    void imprimir ();
    void setFecha (int , int, int);

};
#endif // FECHA_H
