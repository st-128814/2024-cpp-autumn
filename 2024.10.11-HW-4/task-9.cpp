#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf("%d", &n);

    int array[100];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    int h = 0;
    scanf("%d", &h);

    int x = 0;

    for(int i = 0; i < n; ++i)
    {
        if(h <= array[i])
        {
            ++x;
        }
    }
    printf("%d", x + 1);

    return 0;
}
   