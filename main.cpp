#include "array.h"

#include <iostream>

int main()

{

    Arr x(10);

    for (int i = 0; i < 10; ++i)

    {

        x.array_get(i) = i * i;

    }

    x.print();

    x.array_remove(3);

    

    std::cout << std::endl;

    x.print();

    return 0;

}


