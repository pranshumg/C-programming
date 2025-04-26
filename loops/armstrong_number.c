#include <stdio.h>
#include <math.h>

// Checks if a number is an Armstrong number

int main() {

    int num;
    printf("Enter number = ");
    scanf("%d", &num);

    int temp = num;
    int count = 0;

    // Count number of digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = num;
    int dig, sum_pow = 0;

    // Calculate the sum of each digit raised to the power of count
    while (temp > 0) {
        dig = temp % 10;
        sum_pow += pow(dig, count);
        temp /= 10;
    }

    if (num == sum_pow) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}