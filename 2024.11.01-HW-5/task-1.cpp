#include <iostream>

int main(int argc, char* argv[])
{
    int min = 0;
    int n = 0;
    std::cin >> n;

    int *array = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; ++i)
    {
        std::cin >> *(array + i);
    }

    int min_index = 0;
    int *min_element = array;

    for(int i = 1; i < n; ++i)
    {
        if(*(array + i) < *min_element)
        {
            min_element = array + i;
            min_index = i;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        std::cout << *(array + ((min_index + i) % n)) << " ";
    }

    free(array);

    return 0;

}