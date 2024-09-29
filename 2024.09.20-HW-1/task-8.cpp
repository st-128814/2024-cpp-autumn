#include<iostream>

int main(int argc, char* argv[])
{
    int a = 0;
    int s = 0;
    scanf_s("%d", &a);
    s = ((a / 100) + (a / 10 % 10) + (a % 10));   
    printf("%d", s);
    return EXIT_SUCCESS;
 }