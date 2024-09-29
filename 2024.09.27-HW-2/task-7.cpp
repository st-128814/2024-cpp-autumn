#include <iostream>

int main(int argc, char* argv[])
{
    int k = 0;
    int m = 0;
    int n = 0;
    scanf_s("%d", &k);
    scanf_s("%d", &m);
    scanf_s("%d", &n);

if(n <= k)
{
    printf("%d", 2 * m);
}
else if(n * 2 % k != 0)
{
    printf("%d", (n * 2 / k + 1) * m);
}
else if(n * 2 % k == 0)
{
    printf("%d", n * 2 / k * m);
}
return EXIT_SUCCESS;;
}