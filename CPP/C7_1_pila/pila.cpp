#include <iostream>
#include "pila.h"

Pila::Pila(int tamMax)
{
    m_tamMax = tamMax;
    m_datoPila = new int [tamMax];
    m_top = -1;
}

Pila::~Pila()
{
    delete [] m_datoPila ;
}


void Pila::push (int dato)
{
    if (isFull())
        std::cerr << "\nPila llena, no se pudo insertar el elemento"
                  << "'" << dato << "'" << "\n" ;
    else
    {
        m_top ++;
        m_datoPila[m_top] = dato ;
    }
}

int Pila::pop (void)
{
    if (isEmpty())
    {
        std::cerr << "\nPila vacia, no se pueden extraer mas elementos"
                  << "\n";
        return -1;
    }
    else
    {
        int dato = m_datoPila[m_top];
        m_top --;
        return dato;
    }

}

int Pila::getTop(void)
{
    return m_datoPila [m_top];
}

bool Pila::isEmpty(void)
{
    if (m_top==-1)
        return true;
    else
        return false;

}

bool Pila::isFull (void)
{
    if (m_top == (m_tamMax - 1))
        return true;
    else
        return false;
}

void Pila::borrarPila()
{
    m_top = -1;
}
