#include <iostream>

class B;  // declaracion anticipada
class A {
private:
    int valor;
public:
    A(int v) : valor{v} {}

    // Declaramos a la clase B como amiga de A
    friend class B;
};

class B {
public:
    void mostrarValorDeA(const A& a) {
        // B puede acceder a los miembros privados de A
        std::cout << "El valor de A es: " << a.valor << std::endl;
    }
};

int main() {
    A objA(10);
    B objB;
    objB.mostrarValorDeA(objA);
    return 0;
}

