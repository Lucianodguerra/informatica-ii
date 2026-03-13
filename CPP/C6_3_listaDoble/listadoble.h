#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "nododoble.h"

class ListaDoble
{
private:
    NodoDoble* m_inicio;
public:
    ListaDoble();
    ~ListaDoble();
    void insertarPrimero (int);
    NodoDoble* buscar2Nodo (int);
    void insertarDespues (NodoDoble* , int);
    void recorrerLista();
    void eliminarNodo (NodoDoble*);
};

#endif // LISTADOBLE_H
