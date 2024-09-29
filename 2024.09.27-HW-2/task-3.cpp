#include <iostream>
#include <math.h>

int main(int argc, char* argv[])
{   
    double x1 = 0;
    double y1 = 0;
    double r1 = 0;
    scanf_s("%lf", &x1);
    scanf_s("%lf", &y1);
    scanf_s("%lf", &r1);

    double x2 = 0;
    double y2 = 0;
    double r2 = 0;
    scanf_s("%lf", &x2);
    scanf_s("%lf", &y2);
    scanf_s("%lf", &r2);
    
    double r = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (r1 + r2 >= r && r + r1 >= r2 && r + r2 >= r1)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
return EXIT_SUCCESS;;
}