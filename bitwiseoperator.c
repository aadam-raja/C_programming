

#include <stdio.h>

int main() {
    int a = 10, b = 5; // a = 1010, b = 0101 in binary

    printf("Bitwise Operators:\n");
    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR
    printf("~a = %d\n", ~a);        // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    return 0;
