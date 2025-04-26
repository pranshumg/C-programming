#include <stdio.h>

// Prints sum of even digits

int main() {

    int num;
    printf("Enter number = ");
    scanf("%d", &num);

    int original_num = num;
    int even_sum = 0;
    while (num > 0) {   
        int digit = num % 10;
        if (digit % 2 == 0) {
            even_sum += digit;
        }
        num /= 10;
    }
    printf("Sum of even digits in %d = %d\n", original_num, even_sum);

    return 0;
}
