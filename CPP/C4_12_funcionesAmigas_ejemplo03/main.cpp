#include <iostream>

class Hum;
class Temp
{
private:
    int mTemp;
public:
    Temp ( int temp = 0 ) : mTemp {temp}
    {}
    friend void imprimirMet (const Temp& temp , const Hum& hum);
};

class Hum
{
private:
    int mHum;
public:
    Hum (int hum = 0 ) : mHum {hum}
    {}
    friend void imprimirMet (const Temp& temp , const Hum& hum);
};

void imprimirMet (const Temp& temp , const Hum& hum)
{
    std::cout << "Temperatura: " << temp.mTemp << "\n"
              << "Humedad: " << hum.mHum << "\n";
}

int main()
{
    Temp temperatura {20};
    Hum humedad {12};
    imprimirMet (temperatura, humedad);
    return 0;
}
