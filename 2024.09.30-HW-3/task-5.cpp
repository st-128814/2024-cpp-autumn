#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 0;
    int x = 0;
    int y = 0;
    scanf_s("%d", &n);

    for(int i = 0; i < n * n; ++i)
    {
        scanf_s("%d", &x);
        y += x;
    }

    printf("%d", y / 2);

    return 0;
}