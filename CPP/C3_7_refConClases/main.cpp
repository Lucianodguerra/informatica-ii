#include <iostream>

class Punto {
private:
    int x, y;

public:
    Punto(int x = 0, int y = 0);
    int& refX(void);
    int& refY(void);
    void imprimir(void);
};

Punto::Punto (int xi, int yi)
{
    Punto::x = xi;
    Punto::y = yi;
}

int& Punto::refX(void)
{
    return Punto::x;
}

int& Punto::refY(void)
{
    return Punto::y;
}

void Punto::imprimir(void)
{
    std::cout << "Punto ("<< x << " , " << y << ")" << '\n';
}

int main() {
    Punto p(10, 20);

    std::cout << "Antes de la modificacion: " << '\n';
    p.imprimir();

    // Modificamos directamente las coordenadas usando las referencias retornadas
    p.refX() = 100;
    p.refY() = 200;

    std::cout << "\nDespues de la modificacion: " << '\n';
    p.imprimir();
    getchar();

    return 0;
}
