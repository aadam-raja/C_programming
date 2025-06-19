#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int size, i;
    i = 0;
    size = 0;
    printf("enter string");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    printf("%d", size);
    return 0;
}