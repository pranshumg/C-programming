#include <stdio.h>

int main() {

    int n1, n2, div = 2, lcm = 1;
    printf("Enter two numbers = ");
    scanf("%d %d", &n1, &n2);

    int og_n1 = n1, og_n2 = n2;

    while (n1 > 1 || n2 > 1) {
        if (n1 % div == 0 || n2 % div == 0) {
            if (n1 % div == 0) {
                n1 /= div;
            } if (n2 % div == 0) {
                n2 /= div;
            }
            lcm *= div;
        } else {
            div++;
        }
    }

    printf("LCM of %d and %d = %d\n", og_n1, og_n2, lcm);

    return 0;
}