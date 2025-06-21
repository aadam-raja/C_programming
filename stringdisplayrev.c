#include <stdio.h>
int main()
{
    char str[50];
    printf("ENTER STRING: ");
    scanf("%[^\n]s", str);
    int size = 0;
    int i = 0;
    int j;
    char temp;
    while (str[i] != '\0')
    {
        size++;
        i++;
    }
    for (i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf(" the reverse of string is: %s\n", str);
    return 0;
}