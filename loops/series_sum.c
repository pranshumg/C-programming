#include <stdio.h>

// prints sum of series - 1 - 2 + 3 - 4 + 5,.. upto n

int main() {

    int n;
    printf("enter number = ");
    scanf("%d", &n);

    int i = 1, sum = 0;
    while (i <= n) {

        if (i % 2 != 0) {
            sum = sum + i;
        } else {
            sum = sum - i;
        }
        i++;
    }

    printf("sum = %d\n", sum);

    return 0;
}