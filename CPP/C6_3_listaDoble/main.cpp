#include <iostream>
#include "listadoble.h"


int main()
{
    ListaDoble Elementos;
    int x{};
    std::cout << "Ingresar numeros, finalizar con -1" << std::endl;
    std::cin >> x;
    while (x != -1)
    {
        Elementos.insertarPrimero(x);
        std::cin >> x;
    }

    Elementos.recorrerLista();
    getchar();

    Elementos.insertarDespues(Elementos.buscar2Nodo(3),-66);

    Elementos.recorrerLista();
    getchar();

    Elementos.eliminarNodo(Elementos.buscar2Nodo(3));
    Elementos.recorrerLista();
    getchar();
    return 0;
}
