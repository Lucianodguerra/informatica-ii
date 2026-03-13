#include <iostream>
#include "circqueue.h"



int main()
{
    CircQueue myQueue (10);

    std::cout << "El tamano de la cola es: " << myQueue.getSize() << "\n";

    for (int i=0; i< myQueue.getSize()+1 ; i++)
        myQueue.enqueue(i);

    for (int i=0; i< myQueue.getSize()+1; i++)
        std::cout << myQueue.dequeue() << "\t";
    return 0;
}
