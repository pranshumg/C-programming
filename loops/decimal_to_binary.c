#include <stdio.h>

int main() {
    int n;
    printf("enter decimal number: ");
    scanf("%d", &n);

    int og_n = n, bin = 0, a = 1;

    while (n != 0) {
        int rem = n % 2;
        bin = bin + rem * a;
        a *= 10;
        n /= 2;
    }

    printf("binary equivalent of %d: %d\n", og_n, bin);

    return 0;
}