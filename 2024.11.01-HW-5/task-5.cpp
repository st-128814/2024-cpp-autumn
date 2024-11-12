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

    int maxPrice = 0;
    int profit = 0;

    for(int i = n - 1; i >= 0; --i)
    {
        if(*(a + i) > maxPrice)
        {
            maxPrice = *(a + i);
        }

        profit += maxPrice;
    }
        std::cout << profit;
        free(a);

        return 0;
    }