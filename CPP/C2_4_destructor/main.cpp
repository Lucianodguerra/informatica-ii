#include <iostream>

class miClase {

public:
    miClase() ; // Prototipo del constructor
    ~miClase(); // Prototipo del destructor
};

miClase::miClase () {
    std::cout << "Estamos en el constructor \n" ;
}

miClase::~miClase() {
    std::cout << "Estamos en el destructor  \n";
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
