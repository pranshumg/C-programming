#include <stdio.h>

int main() {

    int n;
    printf("enter a number = ");
    scanf("%d", &n);

    if (n >= 100 && n <= 999) {
        printf("%d is a positive three digit number\n", n);
    } else {
        printf("%d is not a positive three digit number\n", n);
    }

    return 0;
}