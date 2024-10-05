#include <stdio.h>

int main(int argc, char* argv[])
{
    int m = 0;
    int n = 0;
    int gcd = 0;
    scanf_s("%d %d", &n, &m);
    int s = n;
    
    while((n != 0) && (m != 0))
    {
       if(n > m)
       {
            n = n % m;
       }
        else
        {
            m = m % n 
        }
    }
    if(n != 0)
    {
        gcd = n;
    }
    else
    {
        gcd = m;
    }

    printf("%d", s / gcd);

    return 0;
}