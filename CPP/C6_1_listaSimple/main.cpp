#include "lista.h"



int main()
{
    Lista Elementos;
    Elementos.crearLista();

    // Elementos.insertarAntes(-66, 3);
    // Elementos.insertarDespues(-99,4);
    Elementos.insertarPrimero(-13);
    Elementos.insertarUltimo(666);
    // Elementos.recorrerLista();

    Elementos.borrarNodo(2);
    // Elementos.borrarOcurrencias(2);
    Elementos.recorrerLista();


    return 0;
}
