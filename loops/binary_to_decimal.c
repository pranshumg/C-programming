#include <stdio.h>

int main() {
    int n;
    printf("enter binary number: ");
    scanf("%d", &n);

    int og_n = n, dec = 0, a = 1;

    while (n != 0) {
        int rem = n % 10;
        dec = dec + rem * a;
        a *= 2;
        n /= 10;
    }

    printf("decimal equivalent of %d: %d\n", og_n, dec);

    return 0;
}