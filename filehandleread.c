#include <stdio.h>
int main()
{
    FILE *ptr = fopen("filehandle.txt", "r");
    char str[200];
    while (fgets(str, 200, ptr) != NULL)
        printf("%s", str);
        fclose(ptr);
    return 0;
}