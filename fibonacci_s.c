#include <stdio.h>

// function declaration (FIX)
int fib(int n);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("%d\n", fib(n));
    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}