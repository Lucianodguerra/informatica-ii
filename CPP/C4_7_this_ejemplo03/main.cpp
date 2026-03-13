#include <iostream>

class cCalc
{
private:
    int mDato {};
public:
    cCalc& sumar (int dato)
    {
        mDato += dato;
        return *this;
    }

    cCalc& restar (int dato)
    {
        mDato -= dato;
        return *this;
    }
    int getmDato ()
    {
        return this->mDato;
    }
};

int main()
{
    cCalc x{};
    x.sumar(5).restar(2);
    std::cout << x.getmDato()<<"\n";
    return 0;
}
