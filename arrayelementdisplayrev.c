#include <stdio.h>

int main()
{
    int A[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER NUMBERS");
        scanf("%d", &A[i]);
    }
    for (j = 4; j >= 0; j--)
    {
        printf("%d ", A[j]);
    }
    return 0;
}