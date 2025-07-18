#include <stdio.h>
int addsequence(int n)
{
    int i;
    int sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int a;
    printf("ENTER NUMBER");
    scanf("%d", &a);
    if (a <= 0)
    {
        printf("PLEASE ENTER POSITIVE NUMBER");
        return -1;
    }
    int result;
    result = addsequence(a);
    printf("%d", result);
    return 0;
}