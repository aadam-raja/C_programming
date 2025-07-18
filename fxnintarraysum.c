#include <stdio.h>
int arraysum(int A[], int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i];
    }
    return sum;
}
int main()
{
    int i;
    int A[10];
    for (i = 0; i < 10; i++)
    {
        printf("ENTER ELEMENT : %d  ", i + 1);
        scanf("%d", &A[i]);
    }
    int result;
    result = arraysum(A, 10);
    printf("%d", result);
    return 0;
}
