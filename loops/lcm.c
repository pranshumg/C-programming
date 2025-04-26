#include <stdio.h>

int main() {

    int n1, n2, div = 2, lc = 1;
    printf("Enter two numbers = ");
    scanf("%d %d", &n1, &n2);

    int o_n1 = n1, o_n2 = n2;

    while (n1 > 1 || n2 > 1) {
        if (n1 % div == 0 || n2 % div == 0) {
            if (n1 % div == 0) {
                n1 /= div;
            } if (n2 % div == 0) {
                n2 /= div;
            }
            lc *= div;
        } else {
            div++;
        }
    }

    printf("LCM of %d and %d = %d\n", o_n1, o_n2, lc);

    return 0;
}