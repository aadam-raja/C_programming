#include <stdio.h>
int main()
{
    int A[5];
    int i, a, b;
    a = 0;
    b = 0;

    for (i = 0; i < 5; i++)
    {
        printf("ENTER ELEMENT  %d ", i + 1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            a += A[i] + 1;
        }
        else
        {
            b += A[i] - 1;
        }
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
