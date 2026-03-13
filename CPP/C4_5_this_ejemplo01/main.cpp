#include <iostream>
class cRec
{
private:
    int mLargo{1};
    int mAncho{1};
public:
    cRec () = default ;
    cRec (int largo, int ancho) : mLargo {largo} , mAncho {ancho}
    {  }
    int getPerimetro ()
    {
        return mLargo+mAncho;
    }
    void setLados (int x, int y)
    {
        mLargo = x ;
        mAncho = y ;
    }

};

int main()
{
    cRec x{};
    x.setLados(3,4);
    std::cout << "Perimetro: " << x.getPerimetro() << "\n";
    return 0;
}
