#include <cstdio>
#include <cmath>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf("%d", &n);

    int array[1000];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &array[i]);
    }

    int x = 0;
    scanf("%d", &x);

    int min = fabs(x - array[0]);
    for(int i = 0; i < n; ++i)
    {
        if(fabs(x - array[i]) < min)
        {
            min = array[i];
        }
    }

    printf("%d", min);

    return 0;

}