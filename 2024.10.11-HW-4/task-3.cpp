#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int array[1000];
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &array[i]);
    }
    int max = array[0];
    int min = array[0];
    for(int i = 0; i < n; ++i)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
         if(array[i] < min)
        {
            min = array[i];
        }
    }
    for(int i = 0; i < n; ++i)
    {
        if(array[i] == max)
        {
            array[i] = min;
        }
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%d", array[i]);
        printf(" ");
    }
    
    return 0;
}
  