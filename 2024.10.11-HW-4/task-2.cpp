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

    int l = 0;
    int r = 0;
    scanf_s("%d %d", &l , &r);
    int max = array[l - 1];
    int index = l - 1;

    for(int i = l; i < r; ++i)
    {
        if(array[i] > max)
        {
            max = array[i];
            index = i;
        }
    }
    printf("%d", max);
    printf(" %d", index + 1);

    

    return 0;
}