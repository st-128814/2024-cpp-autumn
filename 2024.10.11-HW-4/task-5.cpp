#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int array[1000];
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &array[i]);
    }

    int x = 0;
    scanf_s("%d", &x);

    int dif = fabs(x - array[0]);
    int min = array[0];
    for(int i = 0; i < n; ++i)
    {
        if(fabs(x - array[i]) < dif)
        {
            dif = fabs(x - array[i]);
            min = array[i];
        }
        
    }

    printf("%d", min);

    return 0;

}