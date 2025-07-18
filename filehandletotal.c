#include <stdio.h>
int main()
{
    FILE *ptr = fopen("filehandle.txt", "r");
    char str[200];
    int count, i;
    count = 0;
    while (fgets(str, 200, ptr) != NULL)
    {
        for (i = 0; str[i] != '\0'; i++)
            count++;
        printf("%s", str);
    }
    printf("%d", count);
    fclose(ptr);
    return 0;
}