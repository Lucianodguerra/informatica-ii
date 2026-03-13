#include <iostream>

void swap (int& a, int& b)
{
    int temp {a};
    a = b;
    b = temp;
}

int main()
{
    int a{33};
    int b{65};
    std::cout << "Antes del swap. a = " << a << " | b = " << b << std::endl;
    swap (a,b);
    std::cout << "Desp. del swap. a = " << a << " | b = " << b << std::endl;


    return 0;
}
