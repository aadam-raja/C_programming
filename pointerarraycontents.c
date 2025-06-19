#include <stdio.h>
int main()
{
    int A[5];
    int i;
    i = 0;
    int *p = A;
    for (; i < 5; i++)
    {
        printf("ENTER ELEMENT %d\n", i + 1);
        scanf("%d", p + i);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));
    }
    return 0;
}
