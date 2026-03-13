#include <iostream>
#include "suma.h"
#include "producto.h"

int producto (int, int);

int main()
{
    std::cout << "2 x 3 = " << producto (2,3) << '\n';
    std::cout << "2 + 3 = " << suma (2,2) << '\n';

    getchar();
    return 0;
}
