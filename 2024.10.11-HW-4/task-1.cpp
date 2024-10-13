#include <cstdio>

int main(int argc, char* argv[])
{
    int size = 0;
    scanf_s("%d", &size);

    int array[1000];
    for(int i = 0; i < size; ++i)
    {
        scanf_s("%d", &array[i]);
    }

    int element = 0;
    scanf_s("%d", &element);
    int count = 0;
    for(int i = 0; i < size; ++i)
    {
        if(array[i] == element)
        {
            ++count;
        }
    }
    printf("%d", count);
    
    return 0;
}