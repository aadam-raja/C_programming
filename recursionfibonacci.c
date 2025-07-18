#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int i, x;
    printf("ENTER HOW MANY TERMS OF FIBONACCI SERIES: ");
    scanf("%d", &x);

    if (x <= 0)
    {
        printf("PLEASE ENTER A POSITIVE NUMBER");
        return 0;
    }

    printf("FIBONACCI SERIES: ");
    for (i = 0; i < x; i++)
    {
        printf("%d ", fib(i));
    }

    return 0;
}
