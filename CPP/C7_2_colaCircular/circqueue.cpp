#include <iostream>
#include "circqueue.h"


CircQueue::CircQueue(int tamMax)
{
    m_tamMax = tamMax ;
    m_datoCola = new int [tamMax];
    m_front = 0;
    m_rear = -1;
    m_count = 0;
}

CircQueue::~CircQueue()
{
    delete [] m_datoCola;
}

void CircQueue::enqueue(int dato)
{
    if (isFull())
    {
        std::cerr << "\nError: la cola esta llena. El '" << dato
                  << "' no se ingreso\n";
        return;
    }
    m_rear = (m_rear+1) % m_tamMax;
    m_datoCola[m_rear] = dato;
    m_count++;
}

int CircQueue::dequeue ()
{
    if (isEmpty())
    {
        std::cerr << "\nError: la cola esta vacia. No se puede leer\n";
        return -1;
    }
    int dato = m_datoCola[m_front];
    if (m_front == m_rear)
    {
        //si solo hay un elemento
        m_front = 0;
        m_rear = -1;
    }
    else
        m_front = (m_front +1) % m_tamMax;

    m_count --;
    return dato;

}

int CircQueue::getFront ()
{
    return m_datoCola[m_front];
}

bool CircQueue::isEmpty ()
{
    return m_count == 0;
}

bool CircQueue::isFull()
{
    return m_count == m_tamMax;
}

int CircQueue::getSize ()
{
    return m_tamMax ;
}
