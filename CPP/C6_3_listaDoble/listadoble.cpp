#include "listadoble.h"
#include <iostream>

ListaDoble::ListaDoble()
{
    m_inicio = nullptr;
}
ListaDoble::~ListaDoble()
{
    NodoDoble* p = m_inicio;
    while ( p != nullptr )
    {
        NodoDoble* sig = p->getSig();
        delete p;
        p = sig;
    }

}
void ListaDoble::insertarPrimero (int dato)
{
    //paso 1
    NodoDoble* nuevo;
    nuevo = new NodoDoble (dato);
    //paso 2
    nuevo->setSig(m_inicio);
    //verifico que no estemos en caso de lista vacia
    if (m_inicio != nullptr)
        m_inicio->setAnt(nuevo);
    //paso 3
    m_inicio = nuevo;

}

NodoDoble* ListaDoble::buscar2Nodo (int pos)
{
    int i{};

    NodoDoble* indice;
    for (indice = m_inicio; indice !=nullptr; indice = indice->getSig())
    {
        if (pos == i)
            return indice;
        i++;
    }
    return nullptr;

}

void ListaDoble::insertarDespues (NodoDoble* N, int dato)
{
    //paso 1
    NodoDoble* nuevo;
    nuevo = new NodoDoble (dato);

    //paso 2
    nuevo->setSig(N->getSig());

    if (N->getSig() != nullptr)
        (N -> getSig()) -> setAnt(nuevo) ;

    //paso 3
    N ->setSig(nuevo);
    nuevo ->setAnt(N);
}

void ListaDoble::recorrerLista ()
{
    if (m_inicio == nullptr)
    {
        std::cout << "Lista vacia. " << '\n' ;
        return;
    }

    std::cout << "\nRecorriendo lista: " << '\n' ;

    for (NodoDoble* p = m_inicio ; p != nullptr ; p = p->getSig())
    {
        std::cout << p->getDato() << '\t' ;
    }
}

void ListaDoble::eliminarNodo (NodoDoble* killme)
{
    if (killme != nullptr) //Verificamos que el nodo a eliminar no sea nulo
    {
        if (m_inicio == killme) // Entro si el nodo a eliminar es el primero
        {
            //tercer paso
            m_inicio = killme->getSig();
            if (killme->getSig() != nullptr)
                killme->getSig()->setAnt(nullptr);
        }
        else // Entro si el nodo a eliminar NO es el primero
        {
            //primer paso
            killme->getAnt()->setSig(killme->getSig());
            //segundo paso
            if (killme ->getSig() != nullptr) //entro si no es el ultimo
                killme->getSig()->setAnt(killme->getAnt());
        }
        //cuarto paso
        delete killme;
    }
}


