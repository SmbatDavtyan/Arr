

#ifndef ARR_H

#define ARR_H

#include <iostream>

class Arr

{

    int* arr;

    int size_m;

public:

    Arr(int size)

    {

        if (size < 1)

        {

            size = 1;

        }

        arr = new int[size];

        size_m = size;

    }

    Arr()

    {

        arr = new int[1];

        size_m = 1;

    }

    ~Arr()

    {

        delete[] arr;

    }

    bool array_remove(int ind)

    {

        if (size_m <= 0)

        {

            return false;

        }

        int* new_arr = new int[size_m - 1];

        int k = 0;

        for (int i = 0; i < size_m; ++i)

        {

            if (i == ind)

            {

                continue;

            }

            new_arr[k++] = arr[i];

        }

        delete[] arr;

        arr = new_arr;

        --size_m;

        return true;

    }

    int& array_get(int &i)
    {

        if (i >= 0 && i < size_m)

        {

            return arr[i];

        }

        return i;

    }

    void print()

    {

        for (int i = 0; i < size_m; ++i)

        {

            std::cout << arr[i] << ' ';

        }

        std::cout << std::endl;

    }

};

#endif


