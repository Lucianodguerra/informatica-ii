#include <iostream>

// Sobrecarga 1: Suma dos enteros y devuelve el resultado por valor
int sumar(int a, int b) {
    return a + b;
}

// Sobrecarga 2: Suma dos números de punto flotante y devuelve el resultado por referencia
float& sumar(float a, float b) {
    static float resultado; // Necesitamos una variable estática para devolver la referencia
    resultado = a + b;
    return resultado;
}

// Sobrecarga 3: Suma dos enteros y almacena el resultado en un puntero proporcionado por el usuario
void sumar(int a, int b, int* resultado) {
    if (resultado != nullptr) {
        *resultado = a + b;
    }
}

int main() {
    // Uso de la primera sobrecarga (devuelve por valor)
    int resultado1 = sumar(10, 20);
    std::cout << "Resultado 1 (por valor): " << resultado1 << std::endl;

    // Uso de la segunda sobrecarga (devuelve por referencia)
    float& resultado2 = sumar(3.5f, 4.5f);
    std::cout << "Resultado 2 (por referencia): " << resultado2 << std::endl;

    // Uso de la tercera sobrecarga (devuelve por dirección)
    int resultado3;
    sumar(15, 25, &resultado3);
    std::cout << "Resultado 3 (por direccion): " << resultado3 << std::endl;

    return 0;
}
