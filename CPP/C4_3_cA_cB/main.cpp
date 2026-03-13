#include <iostream>

class cA
{
public:
    cA (int x = 0)
    {
        std::cout << "constructor de A: " << x << std::endl;
    }
};

class cB
{
private:
    cA mA{};
public:
    cB (int y):mA {y-1}
    {
        std::cout << "constructor de B: " << y << std::endl;
    }
};

int main()
{
    cB ejemplo{5};
    return 0;
}
