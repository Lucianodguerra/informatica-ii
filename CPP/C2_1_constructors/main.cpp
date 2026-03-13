#include <iostream>
#include "fecha.h"


int main()
{
    cFecha c1 ;
    c1.imprimir();
    c1.setFecha(10,8,1990);
    std::cout << "\n" ;
    c1.imprimir();

    getchar();
    return 0;
}
