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
    cFecha (int, int, int);
    void imprimir ();
    void setFecha (int, int, int);

};
#endif // FECHA_H
