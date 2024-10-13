#include <cstdio>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf_s("%d", &n);

    int income[100];
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &income[i]);
    }

    int tax[100];
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &tax[i]);
    }

    double max = 0;
    int maxIndex = 0;
    for(int i = 0; i < n; ++i)
    {
        double sum = income[i] * tax[i];
        if(sum > max)
        {
            max = sum;
            maxIndex = i;
        }
    }

    printf("%d", maxIndex + 1);

    return 0;
}