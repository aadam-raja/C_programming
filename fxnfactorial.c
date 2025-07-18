#include <stdio.h>
int factorial(int n)
{
    int i = 0;
    int factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int a;
    printf("ENTER  NUMBER ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("PLEASE ENTER POSITIVE NUMBER");
        return -1;
    }
    int result;
    result = factorial(a);
    printf("%d", result);
    return 0;
}
