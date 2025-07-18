#include <stdio.h>
void progression(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    return;
}
int main()
{
    int a;
    printf("ENTER NUMBER");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("PLEASE ENTER POSITIVE VALUE");
        return -1;
    }
    progression(a);
    return 0;
}