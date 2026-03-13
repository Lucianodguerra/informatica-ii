#include <iostream>

class cEjemplo
{
private:
    const int m_vec[3];
public:
    cEjemplo ()
        : m_vec {1 , 3 , 5}
    {
        //No va la asignación aca
    }

    void imprimir ()
    {
        for (int i=0; i < 3; i++)
            std::cout << "m_vec["<<i<<"]: "<< m_vec[i] << "\t";
        std::cout << std::endl;
    }
};

int main()
{
    cEjemplo ejemplo {};
    ejemplo.imprimir();

    return 0;
}
