#include <iostream>
#include <math.h>

int main(int argc, char* argv[])
{
    int x1 = 0;
    int y1 = 0;
    scanf("%d", &x1);
    scanf("%d", &y1);

    int x2 = 0;
    int y2 = 0;
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);

    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 || x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8)
    {
        printf("Enter correct coordinates");
    }
    
    if(x2 - x1 == 0)
    {
        printf("YES");
    }
    else if(y2-y1 == 0)
    {
        printf("YES");
    }
    else if(fabs(x2 - x1) == fabs(y2-y1))
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    
    return EXIT_SUCCESS;;
}
