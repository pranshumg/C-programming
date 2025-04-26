#include <stdio.h>

// prints factorial of first n numbers

int main() {

    int n;
    printf("enter number = ");
    scanf("%d", &n);

    int i = 1, fact = 1; 
    while (i <= n) {
        fact = fact * i;
        printf("factorial of %d = %d\n", i, fact);
        i++;
    }

    return 0;
}