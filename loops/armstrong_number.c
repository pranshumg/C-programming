#include <stdio.h>
#include <math.h>

// Checks if a number is an Armstrong number

int main() {

    int number;
    printf("Enter number = ");
    scanf("%d", &number);

    int temp_number = number;
    int digit_count = 0;

    // Count number of digits
    while (temp_number > 0) {
        digit_count++;
        temp_number /= 10;
    }

    temp_number = number;
    int digit, sum_of_powers = 0;

    // Calculate the sum of each digit raised to the power of digit_count
    while (temp_number > 0) {
        digit = temp_number % 10;
        sum_of_powers += pow(digit, digit_count);
        temp_number /= 10;
    }

    if (number == sum_of_powers) {
        printf("%d is an Armstrong number\n", number);
    } else {
        printf("%d is not an Armstrong number\n", number);
    }

    return 0;
}
