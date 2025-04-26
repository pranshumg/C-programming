#include <stdio.h>

// Prints sum of table of a number

int main() {

    int n, sum = 0;
    printf("enter number = ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        sum = sum + n * i;
    }

    printf("sum of table of %d = %d\n", n, sum);

    return 0;
}