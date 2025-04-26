#include <stdio.h>

int main() {

    int n, m;
    printf("enter base = ");
    scanf("%d", &n);
    printf("enter exponent = ");
    scanf("%d", &m);

    int i = 1, pow = 1;
    while (i <= m) {
        pow = pow * n;
        i++;
    }

    printf("%d raised to the power %d = %d\n", n, m, pow);
    return 0;
}