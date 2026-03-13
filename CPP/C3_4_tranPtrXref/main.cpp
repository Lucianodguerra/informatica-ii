#include <iostream>

//funcion que toma un puntero por referencia
void cambiarPuntero ( int*& ptr )
{
    static int vNuevo {20};
    ptr = &vNuevo;
}

int main()
{
    int vOriginal {10};
    int* puntero {&vOriginal};

    std::cout << "Antes de cambiar el puntero." << std::endl ;
    std::cout << "puntero apunta a vOriginal, valor: " << (*puntero) << std::endl;

    //llamamos a la funcion que cambia el puntero
    cambiarPuntero (puntero);

    std::cout << "\nDesp. de cambiar el puntero." << std::endl ;
    std::cout << "puntero apunta a vNuevo, valor: " << (*puntero) << std::endl;
    return 0;
}
