#include <iostream>

class miClase {
    int *data;
public:
    miClase() ; // Prototipo del constructor
    ~miClase(); // Prototipo del destructor
};

miClase::miClase () {
    std::cout << "Estamos en el constructor \n" ;
    data = new int[20];
}

miClase::~miClase() {
    std::cout << "Estamos en el destructor \n";
    delete[] data;
}

void crearObjeto (void);

int main()
{
    crearObjeto();
    return 0;

}

void crearObjeto (void) {
    miClase obj1;
}


