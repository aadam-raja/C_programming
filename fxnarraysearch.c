#include <stdio.h>
int search(int A[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (A[i] == key)
            return i;
    }
    return -1;
}
int main()
{
    int A[10];
    int i;
    int n;
    printf("ENTER KEY");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        printf("ENTER NUMBER %d", i + 1);
        scanf("%d", &A[i]);
    }
    int result = search(A, 10, n);
    if (result != -1)
    {
        printf("KEY FOUND at index %d ", result);
    }
    else
        printf("KEY NOT FOUND");
    return 0;
}