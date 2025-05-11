
 #include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}
 Use nestingof if-else (compare three numbers)
#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            printf("%d is the largest number.\n", a);
        } else {
            printf("%d is the largest number.\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the largest number.\n", b);
        } else {
            printf("%d is the largest number.\n", c);
        }
    }
    return 0;
}