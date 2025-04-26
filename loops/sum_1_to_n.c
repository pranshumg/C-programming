#include <stdio.h>

int main() {

    int n;
    printf("enter number = ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("sum = %d\n", sum);

    return 0;
}