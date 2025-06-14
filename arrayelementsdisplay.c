#include <stdio.h>
#define size 5
int main()
{
    int A[size];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("ENTER NUMBERS");
        scanf("%d", &A[i]);
    }
    for (j = 0; j < 5; j++)
    {
        printf("%d ", A[j]);
    }
    return 0;
}
