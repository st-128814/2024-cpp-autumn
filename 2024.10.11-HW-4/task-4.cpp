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

    int max = 0;

    for(int i = 1; i < n - 1; ++i )
    {
        int sum = array[i] + array[i + 1] + array[i - 1];
        if(sum > max)
        {
            max = sum;
        }
    }

    int addSum1 = array[0] + array[1] + array[n - 1];
    if(addSum1 > max)
    {
        max = addSum1;
    }

    int addSum2 = array[0] + array[n - 1] + array[n - 2];
    if(addSum2 > max)
    {
       max = addSum2;
    }

    printf("%d", max);

    return 0;
}