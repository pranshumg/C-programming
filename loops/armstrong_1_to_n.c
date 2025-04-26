#include <stdio.h>
#include <math.h>

int main() {

    int max_number;
    printf("Enter number = ");
    scanf("%d", &max_number);

    int current_number = 1;
    while (current_number <= max_number) {
        int temp_current = current_number;
        int digit_count = 0;
    
        // Count number of digits
        while (temp_current > 0) {
            digit_count++;
            temp_current /= 10;
        }
    
        temp_current = current_number;
        int digit_value, sum_of_digit_powers = 0;
    
        // Calculate the sum of each digit raised to the power of digit_count
        while (temp_current > 0) {
            digit_value = temp_current % 10;
            sum_of_digit_powers += pow(digit_value, digit_count);
            temp_current /= 10;
        }
    
        if (current_number == sum_of_digit_powers) {
            printf("%d ", current_number);
        }

        current_number++;
    }
    printf("\n");
    
    return 0;
}
