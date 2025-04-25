#include <stdio.h>

int main() {

    int m, n;
    printf("enter dividend = ");
    scanf("%d", &m);
    printf("enter divisor = ");
    scanf("%d", &n);

    if (m % n == 0) {
        printf("%d is divisible by %d", m, n);
    } else {
        printf("%d is not divisible by %d\n", m, n);
    }

    return 0;
}