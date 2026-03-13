#include <iostream>
#include "pila.h"



int main()
{
    Pila miPila(10);
    for (int i=0; i<11; i++)
        miPila.push(i);

    for (int i=0; i<11; i++)
        std::cout << miPila.pop() << "\t";



    return 0;
}
