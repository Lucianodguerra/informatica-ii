#include <iostream>
#include "mivector.h"


int main ()
{
    int tam{};
    std::cout << "Ingrese el tamanho del vector" << std::endl ;
    std::cin >> tam ;
    miVector obj (tam); //instanciamos el objeto

    std::cout << "El tamanho del vector obj  es: " << obj.getTam() << std::endl;

    std::cout << "obj[5] = " << obj.getValor(5) << std::endl;
    obj.setValor(5,5);
    std::cout << "El valor modificado de obj[5] = " << obj.getValor(5) << std::endl;

    system ("pause");

    return 0;
}
