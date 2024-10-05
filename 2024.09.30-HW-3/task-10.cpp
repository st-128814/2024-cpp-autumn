#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 0;
    int t = 0;
    int period = 0;
    int max = 0;
    scanf_s("%d", &n);

    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &t);
        if(t > 0)
        {
            ++period;
        }
        else
        {
            period = 0;
        }
        if(period > max)
        {
            max = period; 
        }
    }
    printf("%d", max);

    return 0;
}