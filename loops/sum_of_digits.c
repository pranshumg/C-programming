#include <stdio.h>

int main() {

    int n;
    printf("Enter number = ");
    scanf("%d", &n);

    int sum = 0;
    while (n > 0) {
        int ld = n % 10;
        sum += ld;
        n /= 10;
    }
    printf("Sum = %d\n", sum);

    return 0;
}