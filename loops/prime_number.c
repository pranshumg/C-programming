#include <stdio.h>

int main() {

    int num;
    printf("Enter number = ");
    scanf("%d", &num);

    int is_composite = 0;
    for (int divisor = 2; divisor <= num - 1; divisor++) {
        if (num % divisor == 0) {
            is_composite = 1;
            break;
        }
    }

    if (num == 1) {
        printf("%d is neither a prime nor a composite number\n", num);
    } else if (is_composite == 0) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is a composite number\n", num);
    }

    return 0;
}
