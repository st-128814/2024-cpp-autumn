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

    int sum = 0;
    for(int i = 0; i < n; ++i)
    {
        if(*(a + i) > 0)
        {
            sum += *(a + i);
        }
    }
    
    int min_index = 0;
    int max_index = 0;

    for(int i = 1; i < n; ++i)
    {
        if(*(a + i) < *(a + min_index))
        {
            min_index = i;
        }
        if(*(a + i) > *(a + max_index))
        {
            max_index = i;
        }
    }

    int begin = 0;
    int end = 0;

    if(min_index < max_index)
    {
        begin = min_index + 1;
        end = max_index;
    }
    else
    {
        begin = max_index + 1;
        end = min_index;
    }

    int multi = 1;

        for(int i = begin; i < end; ++i)
        {
            multi *= *(a + i);
        }
    
    std::cout << sum << " " << multi;

    free(a);

    return 0;
}