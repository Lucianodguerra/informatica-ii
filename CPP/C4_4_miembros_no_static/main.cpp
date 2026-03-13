#include <iostream>

class cRec
{
private:
    int mLargo{1};
    int mAncho{1};
public:
    cRec()=default;
    cRec (int largo , int ancho) : mLargo {largo} , mAncho {ancho}
    {}
    cRec (int ancho) : mAncho {ancho}
    {}
    void getPerimetro ()
    {
        std::cout << "Perimetro: " << mLargo+mAncho << "\n";
    }
};

int main()
{
    cRec x{2,2};
    x.getPerimetro();
    cRec y{2};
    y.getPerimetro();
    cRec z{};
    z.getPerimetro();
    return 0;
}
