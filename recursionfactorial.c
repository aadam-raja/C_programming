#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return n * fact(n - 1);
}
int main()
{
    int x;
    printf("ENTER NUMBER ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("PLEASE ENTER POSITIVE NUMBER OR ZERO");
    }
    int z = fact(x);
    printf("THE FACTORIAL OF THE NUMBER IS:%d", z);
    return 0;
}
