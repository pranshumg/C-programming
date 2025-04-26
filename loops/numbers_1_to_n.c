#include <stdio.h>

int main() {

    int n;
    printf("enter a number = ");
    scanf("%d", &n);

    int i, j, k;

    // prints numbers 1 to n
    // method 1


    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    
    // method 2

    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    printf("\n");

    // prints 1 to n even numbers
    // method 1

    for (j = 2; j <= n; j = j + 2) {
        printf("%d ", j);
    }

    printf("\n");

    // method 2

    i = 2;
    while (i <= n) {
        printf("%d ", i);
        i = i + 2;
    }

    printf("\n");

    // prints 1 to n odd numbers
    // method 1

    for (k= 1; k <= n; k = k + 2) {
        printf("%d ", k);
    }

    printf("\n");

    // method 2
    
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i = i + 2;
    }

    printf("\n");

    return 0;
}