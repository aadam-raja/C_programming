#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, isPalindrome = 1, length = 0;

    printf("ENTER STRING: ");
    scanf(" %[^\n]", str); 
    while (str[length] != '\0')
    {
        length++;
    }

    
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
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
