#include <stdio.h>
int main() {
int A[5] = {10, 20, 30, 40, 50};
int length;
length = sizeof(A) / sizeof(A[0]);
printf("Length of array: %d", length);
return 0;
}
