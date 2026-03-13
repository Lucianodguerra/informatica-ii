#include <iostream>
#include <stdexcept>
#include "listaOrdenada.h"
#include "nodo.h"

ListaOrd::ListaOrd()
{
    m_inicio = nullptr;
}

void ListaOrd::recorrerLista ()
{
    if (m_inicio == nullptr)
    {
        std::cout << "Lista vacia. " << '\n' ;
        return;
    }

    std::cout << "Recorriendo lista: " << '\n' ;

    for (Nodo* p = m_inicio ; p != nullptr ; p = p->getSig())
    {
        std::cout << p->getDato() << '\t' ;
    }
}

ListaOrd::~ListaOrd ()
{
    Nodo* p = m_inicio;
    while ( p != nullptr )
    {
        Nodo* sig = p->getSig();
        delete p;
        p = sig;
    }
}

Nodo* ListaOrd::getUltimo ()
{
    Nodo* p = m_inicio;
    if ( p == nullptr)
        throw std::runtime_error ("Error, lista vacia");
    while (p->getSig() != nullptr )
        p = p->getSig();
    return p;
}

Nodo* ListaOrd::buscarNodo (int objetivo )
{
    Nodo* indice ;

    for (indice = m_inicio ; indice != nullptr ; indice = indice ->getSig())
    {
        if (indice->getDato() == objetivo)
            return indice;
    }

    return nullptr;

}

void ListaOrd::borrarNodo (int objetivo)
{
    // Verificamos que la lista tenga elementos
    if (m_inicio == nullptr) {
        throw std::runtime_error("Lista vacia. No se puede borrar nodos en una lista vacia.");
    }
    Nodo *actual, *anterior;

    //Primer paso
    actual = m_inicio;
    anterior = nullptr;

    //paso2 + verificacion de existencia del dato
    while (actual != nullptr && actual->getDato() != objetivo) {
        anterior = actual;
        actual = actual->getSig();
    }
    //Verificamos si no encontramos el nodo con el valor objetivo
    if (actual == nullptr)
        throw std::runtime_error("El nodo a borrar no se encuentra en la lista.");

    //pas3 y paso4
    if (actual == m_inicio)
        m_inicio = actual->getSig();
    else
        anterior ->setSig(actual->getSig());

    //paso5
    delete actual;

}

void ListaOrd::borrarOcurrencias(int objetivo)
{
    // Verificamos que la lista tenga elementos
    if (m_inicio == nullptr) {
        throw std::runtime_error("Lista vacia. No se puede borrar nodos en una lista vacia.");
    }
    Nodo *actual, *anterior;
    bool encontrado{false};

    actual = m_inicio;
    anterior = nullptr;

    while (actual != nullptr ) {

        if ( actual->getDato() == objetivo)
        {
            encontrado = true;

            if (actual == m_inicio)
                m_inicio = actual->getSig();
            else
                anterior ->setSig(actual->getSig());

            Nodo* aEliminar {actual};
            actual = actual->getSig();
            delete aEliminar;

        }
        else
        {
            anterior = actual;
            actual = actual->getSig();
        }

    }
    //Verificamos si no encontramos el nodo con el valor objetivo
    if (!encontrado)
        std::cout << "\nEl nodo a borrar no se encuentra en la lista." ;


}

void ListaOrd::insertarOrdenado (int dato)
{
    Nodo* nuevo ;
    nuevo = new Nodo(dato);
    if (m_inicio == nullptr) // lista vacía
        m_inicio = nuevo;
    else if (dato < (m_inicio->getDato()))
    {
        nuevo->setSig(m_inicio);
        m_inicio = nuevo;
    }
    else // búsqueda del nodo anterior al de inserción
    {
        Nodo *anterior, *p;
        anterior = p = m_inicio;
        while ((p->getSig()!= nullptr) && (dato > p->getDato()))
        {
            anterior = p;
            p = p->getSig();
        }
        if (dato > p->getDato()) // se inserta después del último
            anterior = p;
        // se procede al enlace del nuevo nodo
        nuevo->setSig(anterior->getSig());

        anterior->setSig(nuevo);
    }

}
