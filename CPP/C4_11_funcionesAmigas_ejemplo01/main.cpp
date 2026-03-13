#include <iostream>

class Caja
{
private:
    int ancho;
public:
    Caja (int a) : ancho {a}
    {}

    //declaracion de funcion amiga
    friend int obtenerAncho (const Caja& caja);
    friend void modificarAncho (Caja& caja);
};

//funcion amiga
int obtenerAncho (const Caja& caja)
{
    return caja.ancho; //puede acceder a los miembros privados
}

void modificarAncho (Caja& caja)
{
    caja.ancho ++;
}
int main()
{
    Caja c{10};
    modificarAncho(c);
    std::cout << "Ancho: " << obtenerAncho (c) << "\n";
    return 0;
}
