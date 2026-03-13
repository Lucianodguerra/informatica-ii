#include <iostream>
#include "fecha.h"


int main()
{
    cFecha c1 {17};
    cFecha c2 {9,9};
    c1.imprimir();
    c1.setFecha(10,05,1990);
    std::cout << "\n" ;
    c1.imprimir();

    getchar();
    return 0;
}
