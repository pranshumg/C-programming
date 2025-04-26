#include <stdio.h>
#include <math.h>

int main() {

    int max;
    printf("Enter number = ");
    scanf("%d", &max);

    int curr = 1;
    while (curr <= max) {
        int temp = curr;
        int count = 0;

        // Count number of digits
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = curr;
        int digit, sum_pow = 0;

        // Calculate the sum of each digit raised to the power of count
        while (temp > 0) {
            digit = temp % 10;
            sum_pow += pow(digit, count);
            temp /= 10;
        }

        if (curr == sum_pow) {
            printf("%d ", curr);
        }

        curr++;
    }
    printf("\n");

    return 0;
}