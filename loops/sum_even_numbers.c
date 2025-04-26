#include <stdio.h>

int main() {

    int n; 
    printf("enter number = ");
    scanf("%d", &n);

    // Method 1

    int sum = 0;
    for (int i = 2; i <= (2 * n); i = i + 2) {
        sum = sum + i;
    }
    if (n <= 0) {
        printf("please enter valid number\n");
    } else {
        printf("sum = %d\n", sum);
    }

    // Method 2

    int s = n * (n + 1); // s = sum
    printf("sum = %d\n", s);
    
    return 0;
}