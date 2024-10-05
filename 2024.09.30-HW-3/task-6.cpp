#include <stdio.h>

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int s = a * b;
    int gcd = 0;
    int lcm = 0;

 while((a != 0) && (b != 0))
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a != 0) 
    {
        gcd = a;
    }
    else 
    {
        gcd = b;
    }

    if (gcd != 0) 
    {
        lcm = s / gcd; 
    }

    printf("%d\n", lcm); 

    return 0;
}

