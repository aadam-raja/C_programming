#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reversed[100];
    int i, length, isPalindrome = 1;

    printf("ENTER STRING: ");
    scanf(" %[^\n]", str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    for (i = 0; i < length; i++)
    {
        if (str[i] != reversed[i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
