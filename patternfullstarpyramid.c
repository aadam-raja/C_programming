#include <stdio.h>
int main()
{
    int i, k, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 8; j >= i; j--)
        {
            printf(" ");
        }

        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}