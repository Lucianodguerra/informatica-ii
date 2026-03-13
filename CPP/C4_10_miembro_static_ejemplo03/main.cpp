#include <iostream>

class cPoo
{
private:
    static int sValor;
public:
    static int getValor ()
    {
        return sValor;
    }
};

int cPoo::sValor {10};

int main()
{
    std::cout << cPoo::getValor() << std::endl;
    return 0;
}
