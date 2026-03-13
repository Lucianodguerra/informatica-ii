#include <iostream>

int& obtenerElemento (int* vec, int indice)
{
    return vec[indice];
}

int main()
{
    int miVec[5]{10,20,30,40,50};

    //usamos la funcion de la forma conocida
    std::cout << "El valor vec[2] = " << obtenerElemento(miVec, 2)<< "\n\n";

    //llamamos a la funcion y modificamos el valor del elemento vector
    obtenerElemento (miVec, 2) = 0;
    std::cout << "El nuevo valor vec[2] = " << obtenerElemento(miVec, 2)<< "\n\n";

    return 0;
}
