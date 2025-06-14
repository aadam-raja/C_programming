#include <stdio.h>
int main()
{
    int A[3][3];
    int i, j;
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("ENTER ENTRIES %d %d ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        sum += A[i][i];
    }
    printf("%d", sum);
    return 0;
}
