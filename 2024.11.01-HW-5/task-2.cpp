#include <iostream>

int main(int argc, char* argv[])
{
    int n = 0;
    std::cin >> n;

    int *a = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; ++i)
    {
        std::cin >> *(a + i);
    }

    int k = 0;
    std::cin >> k;

    k = k % n;

    if(k < 0)
    {
        k += n;
    }

    for(int i = 0; i < n; ++i)
    {
        std::cout << *(a +((n + i - k) % n)) << " ";
    }

    free(a);    

    return 0;
}