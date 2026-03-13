#include <iostream>
#include "fecha.h"

void cFecha::imprimir ()
{
    std::cout << dia << "/" << mes << "/" << anho ;
}
void cFecha::setFecha (int day, int month, int year)
{
    if (day>0 && day <31)
        dia = day;
    if (month >0 && month <12)
        mes = month;
    if (year > 1960 && year <2024)
        anho = year;
}

cFecha::cFecha ()
{
    dia = 01 ;
    mes = 01 ;
    anho = 1960 ;
}

cFecha::cFecha (int day , int month , int year )
{
    if (day>0 && day <31)
        dia = day;
    if (month >0 && month <12)
        mes = month;
    if (year > 1960 && month <2024)
        anho = year;
}
