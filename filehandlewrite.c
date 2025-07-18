#include <stdio.h>
int main()
{
    FILE *ptr = fopen("filewrite.txt","w");
    char str[] = "GO was developed by Google";
    fputs(str, ptr);
    fclose(ptr);
    return 0;
}
