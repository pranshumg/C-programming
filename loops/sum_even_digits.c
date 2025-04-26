#include <stdio.h>

// Prints sum of even digits

int main() {

    int n;
    printf("Enter number = ");
    scanf("%d", &n);

    int o_num = n;
    int sum_even = 0;
    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) {
            sum_even += d;
        }
        n /= 10;
    }
    printf("Sum of even digits in %d = %d\n", o_num, sum_even);

    return 0;
}