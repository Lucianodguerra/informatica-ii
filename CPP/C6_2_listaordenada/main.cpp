#include <iostream>
#include "listaOrdenada.h"

using namespace std;

int main()
{
    ListaOrd ElementosOrd;
    int x{};

    std::cout << "Ingresar valores en cualquier orden. Terminar con -1" << std::endl;
    std::cin >> x;

    while ( x != -1)
    {
        ElementosOrd.insertarOrdenado(x);
        std::cin >> x;
    }
    ElementosOrd.recorrerLista();
    getchar();

    return 0;
}
