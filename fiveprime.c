#include <stdio.h>

int main() {
    int n, i, j, flag, sum = 0;

    for (i = 1; i <= 5; i++) {
        printf("ENTER NUMBER %d: ", i);
        scanf("%d", &n);
        flag = 0;

        if (n == 0 || n == 1) {
            printf("NEITHER COMPOSITE NOR PRIME\n");
        } else if (n == 2) {
            sum += n;
        } else {
            for (j = 2; j <= n / 2; j++) {
                if (n % j == 0) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                sum += n;
            }
        }
    }

    printf("THE SUM OF PRIMES IS: %d\n", sum);
    return 0;
}
