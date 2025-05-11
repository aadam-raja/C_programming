

#include <stdio.h>

int main() {
    int a = 10;

    printf("Increment/Decrement Operators:\n");
    printf("a++ = %d\n", a++); // Post-increment
    printf("Now a = %d\n", a);
    printf("++a = %d\n", ++a); // Pre-increment
    printf("a-- = %d\n", a--); // Post-decrement
    printf("Now a = %d\n", a);
    printf("--a = %d\n", --a); // Pre-decrement

    return 0;
}