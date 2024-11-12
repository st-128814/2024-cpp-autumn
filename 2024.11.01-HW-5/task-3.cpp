#include <iostream>

int main(int argc, char * argv[])
{
    int n = 0;
    std::cin >> n;

    int *a = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    int odd = 0;
    int even = 0;

    for(int i = 0; i < n; ++i)
    {
        if(*(a + i) % 2 != 0)
        {
            std::cout << *(a + i) << " ";
            ++odd;
        }
    }

    std::cout << std::endl;

    for(int i = 0; i < n; ++i)
    {
        if(*(a + i) % 2 == 0)
        {
            std::cout << *(a + i) << " ";
            ++even;
        }
    }

    std::cout << std::endl;

    if(odd <= even)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }

    free(a);

    return 0;
}