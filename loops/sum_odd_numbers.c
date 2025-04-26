#include <stdio.h>

int main() {

    int n; 
    printf("enter number = ");
    scanf("%d", &n);

    // Method 1

    int sum = 0;
    for (int i = 1; i <= (2 * n) - 1; i = i + 2) {
        sum = sum + i;
    }
    if (n <= 0) {
        printf("please enter valid number\n");
    } else {
        printf("sum = %d\n", sum);
    }

    // Method 2

    int s = n * n; 
    printf("sum = %d\n", s);

    return 0;
}