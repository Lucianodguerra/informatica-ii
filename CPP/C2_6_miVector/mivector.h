#ifndef MIVECTOR_H
#define MIVECTOR_H


class miVector {
private:
    int n_tam{};
    int *n_vector {nullptr};

public:
    miVector (int );
    ~miVector ();
    void setValor ( int , int );
    int getValor ( int ) ;
    int getTam ( void ) ;

};


#endif // MIVECTOR_H
