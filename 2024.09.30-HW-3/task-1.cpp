#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 0;
    int r = 0;
    int g = 0;
    int x = 0;
    scanf_s("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &x);
        if(x == 1)
        {
            ++r;
        }
        else
        {
            ++g;
        }
    }
    if(r < g)
    {
        printf("%d", r);
    }
    else
    {
        printf("%d",g);
    }
    return 0;
}