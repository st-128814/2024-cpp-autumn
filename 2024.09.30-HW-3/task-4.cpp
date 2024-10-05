#include <stdio.h>

int main(int argc, char* argv[])
{
    int v = 0;
    int s = 0;
    int n = 0;
    int max = 0;
    int index = -1;

    scanf_s("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &v);
        scanf_s("%d", &s);
        if((s == 1) && (v > max))
        {
            max = v;
            index = i + 1;
        }
    }
    printf("%d", index);
    return 0;
}