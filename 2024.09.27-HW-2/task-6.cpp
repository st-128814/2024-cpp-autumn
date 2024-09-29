#include <iostream>
#include <math.h>

int main(int argc, char* argv[])
{
double a = 0;
double b = 0;
double c = 0;
scanf_s("%lf", &a);
scanf_s("%lf", &b);
scanf_s("%lf", &c);

if(a == 0 && b == 0 && c ==0)
{
    printf("-1\n");
}
else if(a == 0 && b == 0)
{
    printf("0\n");
}
else if(a == 0)
{
    printf("1\n%lf\n", -c / b);
}
else 
{
double d = b * b - 4 * a * c;
if(d > 0)
{
    printf("2\n");
    printf("%lf\n", (-b - sqrt(d)) / (2 * a));
    printf("%lf\n", (-b + sqrt(d)) / (2 * a));
}
else if(d < 0)
{
    printf("0\n");
}
else if(d == 0)
{
    printf("1\n %lf\n", -b / (2 * a));
}
return EXIT_SUCCESS;;
} 
}