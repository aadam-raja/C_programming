#include <stdio.h>
int exponent(int a, int b)
{
    int power = 1;
    int i;
    for (i = 0; i < b; i++)
    {
        power *= a;
    }

    return power;
}
int main()
{
    int a, b;
    printf("ENTER FIRST NUMBER");
    scanf("%d", &a);
    printf("ENTER SECOND NUMBER");
    scanf("%d", &b);
    if (a <= 0 || b <= 0)
    {
        printf("ENTER POSITIVE INTEGERS");
        return -1;
    }

    int result;
    result = exponent(a, b);

    printf("%d", result);
    return 0;
}