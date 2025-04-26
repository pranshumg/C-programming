#include <stdio.h>

int main() {

    int num1, num2, divisor = 2, lcm = 1;
    printf("Enter two numbers = ");
    scanf("%d %d", &num1, &num2);

    int orig_num1 = num1, orig_num2 = num2;

    while (num1 > 1 || num2 > 1) {
        if (num1 % divisor == 0 || num2 % divisor == 0) {
            if (num1 % divisor == 0) {
                num1 /= divisor;
            } if (num2 % divisor == 0) {
                num2 /= divisor;
            }
            lcm *= divisor;
        } else {
            divisor++;
        }
    }

    printf("LCM of %d and %d = %d\n", orig_num1, orig_num2, lcm);

    return 0;
}
