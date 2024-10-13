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

    int m = 0;
    scanf_s("%d", &m);
    int x = 0;
    int y = 0;

    for(int i = 0; i < m; ++i)
    {
        scanf_s("%d %d", &x, &y);
        for(int j = x - 1; j < y; ++j)
        {
            printf("%d ", array[j]);
        }

        printf("\n");
    }

    return 0;
}