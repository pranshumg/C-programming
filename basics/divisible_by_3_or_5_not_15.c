#include <stdio.h>

int main() {

    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    // Method 1

    if (n % 5 == 0 || n % 3 == 0) {
        if (n % 15 != 0) {
            printf("%d is divisible by 5 or 3 but not 15\n", n);
        } else {
            printf("%d is divisible by 5 or 3 and 15\n", n);
        }
    } else {
        printf("%d is neither divisible by 5 nor 3\n", n);
    }

    // Method 2

    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) {
        printf("%d is divisible by 5 or 3 but not 15\n", n);
    } else {
        printf("%d is not matching condition\n", n);
    }

    return 0;
}