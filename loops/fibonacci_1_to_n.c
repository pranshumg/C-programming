#include <stdio.h>

int main() {

    int n;
    printf("enter number = "); 
    scanf("%d", &n);

    if (n == 1) {
        printf("Fibonacci(1) = 0\n");
    } else if (n == 2) {
        printf("Fibonacci(1) = 0\n");
        printf("Fibonacci(2) = 1\n");
    } else {
        printf("Fibonacci(1) = 0\n");
        printf("Fibonacci(2) = 1\n");
        int prev1 = 0;  // F(n-2)
        int prev2 = 1;  // F(n-1)
        int curr;       // Current term
        
        for(int i = 3; i <= n; i++) {
            curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
            printf("Fibonacci(%d) = %d\n", i, curr);
        }         
    }

    return 0;
}