#include <stdio.h>

int main() {

    int a, b, c; 
    printf("enter 1st side = ");
    scanf("%d", &a);
    printf("enter 2nd side = ");
    scanf("%d", &b);
    printf("enter 3rd side = ");
    scanf("%d", &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        printf("%d,%d and %d can be the sides of a triangle\n", a, b, c);
    } else {
        printf("%d,%d and %d cannot be the sides of a triangle\n", a, b, c);
    }

    return 0;
}