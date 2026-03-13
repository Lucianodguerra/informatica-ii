#include <iostream>

int& funcion (int vX, int& rY)
{
    static int aux{};
    rY++;
    aux = vX * rY;

    return aux;
}

int main()
{

    int vX{2};
    std::cout << "vX = " << vX << std::endl;

    //guardo la referencia
    int& refAux {funcion (vX, vX)};
    std::cout << "vX = " << vX << "\trefAux = "<< refAux << std::endl;

    //guardo la direccion de aux
    int* ptrAux = &funcion (vX, vX);
    std::cout << "vX = " << vX << "\t*ptrAux = "<< *ptrAux << std::endl;

    //guardo la copia de aux
    int copiaAux = funcion (vX, vX);
    std::cout << "vX = " << vX << "\tcopiaAux = "<< copiaAux << std::endl;
    return 0;
}
