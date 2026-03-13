#include <iostream>

void incrementByPointer (int* ptr)
{
    if (ptr)
        (*ptr)++;
}

int main()
{
    int vX{5};
    std::cout << "Valor antes del incremento (por direccion): " << vX << std::endl;

    incrementByPointer(&vX);

    std::cout << "Valor desp. del incremento (por direccion): " << vX << std::endl;
    return 0;
}
