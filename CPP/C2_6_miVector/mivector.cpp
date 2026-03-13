#include "mivector.h"
#include <stdexcept>
#include <iostream>

miVector::miVector (int tam) {
    if (tam > 0)
    {
        miVector::n_vector = new int [tam] {0};
        miVector::n_tam = tam ;
    }
    else
        throw std::runtime_error ("El numero de elementos debe ser mayor a cero");
}

miVector::~miVector () {
    delete[] miVector::n_vector ;
}

void miVector::setValor ( int valor , int pos ) {
    miVector::n_vector[pos] = valor ;
}

int miVector::getTam( void ) {
    return miVector::n_tam ;

}

int miVector::getValor (int pos) {
    return miVector::n_vector[pos] ;
}

