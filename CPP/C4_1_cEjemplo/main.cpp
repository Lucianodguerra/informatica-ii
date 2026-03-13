#include <iostream>

class cEjemplo
{
private:
    int    m1{};
    char   m2{};
    double m3{};
public:
    cEjemplo (int v1, char v2, double v3 = 6.66)
        : m1 {v1} , m2 {v2} , m3 {v3}
    {
        //no va la asignación aca
    }

    void imprimir ()
    {
        std::cout << "m1: " << m1 << "\tm2: "
                  << m2 << "\tm3: " << m3 << std::endl ;
    }
};

int main()
{
    cEjemplo ejemplo1 {1, 'E', 6.66};
    cEjemplo ejemplo2 {2 , 'A'};
    ejemplo1.imprimir();
    ejemplo2.imprimir();
    return 0;
}
