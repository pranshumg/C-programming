#include <stdio.h>

int main() {

    int num;
    printf("Enter number = ");
    scanf("%d", &num);

    int digit_sum = 0;
    while (num > 0) {
        int last_digit = num % 10; 
        digit_sum += last_digit;
        num /= 10;
    }
    printf("Sum = %d\n", digit_sum);
    
    return 0;
}
