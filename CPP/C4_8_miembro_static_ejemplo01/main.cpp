#include <iostream>

class cEj
{
public:
    static int mAux ;
    void incmAux ()
    {
        (this->mAux)++;
    }
};

int cEj::mAux {4};

int main()
{
    cEj::mAux = 14;
    std::cout << "cEj::mAux: " << cEj::mAux << "\n";
    return 0;
}
