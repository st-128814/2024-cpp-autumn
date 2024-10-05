#include <stdio.h>

int main(int argc, char* argv[])
{
    int heightBridge = 0;
    int n = 0;
    
    scanf_s("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        scanf_s("%d", &heightBridge);
        if(heightBridge <= 437)
        {
            printf("Crash %d", i + 1);
            return 0;
        }
    }
    printf("No crash");
    return 0;
}