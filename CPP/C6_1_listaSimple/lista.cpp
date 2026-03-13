#include <iostream>
#include <stdexcept>
#include "lista.h"
#include "nodo.h"

Lista::Lista()
{
    m_inicio = nullptr;
}

void Lista::crearLista ()
{
    int x{};
    m_inicio = nullptr ; //potencial memory_leak
    std::cout << "El ingreso termina con -1" << '\n' ;
    do {
        std::cin >> x;
        if (x!=-1)
            m_inicio = new Nodo (x , m_inicio);
    } while ( x!=-1);
}

void Lista::recorrerLista ()
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

Lista::~Lista ()
{
    Nodo* p = m_inicio;
    while ( p != nullptr )
    {
        Nodo* sig = p->getSig();
        delete p;
        p = sig;
    }
}

void Lista::insertarPrimero (int dato)
{
    //paso 1
    Nodo* nuevo = new Nodo (dato) ;
    //paso 2
    nuevo->setSig(m_inicio) ;
    //paso 3
    m_inicio = nuevo ;

}

Nodo* Lista::getUltimo ()
{
    Nodo* p = m_inicio;
    if ( p == nullptr)
        throw std::runtime_error ("Error, lista vacia");
    while (p->getSig() != nullptr )
        p = p->getSig();
    return p;
}

void Lista::insertarUltimo (int dato)
{
    //paso 1
    Nodo* nuevo = new Nodo (dato);
    //buscamos el ultimo
    Nodo* ultimo = getUltimo();
    //paso 2
    ultimo->setSig( nuevo);
}

void Lista::insertarAntes(int dato , int objetivo)
{
    // Verificamos que la lista tenga elementos
    if (m_inicio == nullptr) {
        throw std::runtime_error("Lista vacia. No se puede insertar antes de un valor en una lista vacia.");
    }
    //Verificamos si el primer nodo es el nodo objetivo
    if (m_inicio->getDato() == objetivo) {
        // Insertamos el nuevo nodo al inicio de la lista
        m_inicio = new Nodo(dato, m_inicio);
        return;
    }
    //paso 1
    Nodo* actual = m_inicio;
    Nodo* anterior = nullptr;

    //paso2 + verificacion de existencia del dato
    while (actual != nullptr && actual->getDato() != objetivo) {
        anterior = actual;
        actual = actual->getSig();
    }
    //Verificamos si no encontramos el nodo con el valor objetivo
    if (actual == nullptr)
        throw std::runtime_error("El valor objetivo no se encuentra en la lista.");
    // paso3 Insertar el nuevo nodo antes del nodo que tiene el valor objetivo
    Nodo* nuevo = new Nodo(dato, actual);
    //paso 4 Ajustamos el puntero del nodo anterior para que apunte al nuevo nodo
    anterior->setSig(nuevo);
}

Nodo* Lista::buscarNodo (int objetivo )
{
    Nodo* indice ;

    for (indice = m_inicio ; indice != nullptr ; indice = indice ->getSig())
    {
        if (indice->getDato() == objetivo)
            return indice;
    }

    return nullptr;

}

void Lista::insertarDespues (int dato, int objetivo)
{
    Nodo* ptrObj = buscarNodo(objetivo);

    if (ptrObj == nullptr)
        throw std::runtime_error ("El valor objetivo no se encuentra en la lista.");

    Nodo* nuevo = new Nodo(dato, ptrObj->getSig());
    ptrObj->setSig(nuevo);

}

void Lista::borrarNodo (int objetivo)
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

void Lista::borrarOcurrencias(int objetivo)
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
        else {
            anterior = actual;
            actual = actual->getSig();
        }
    }
    //Verificamos si no encontramos el nodo con el valor objetivo
    if (!encontrado)
        std::cout << "\nEl nodo a borrar no se encuentra en la lista." ;


}
