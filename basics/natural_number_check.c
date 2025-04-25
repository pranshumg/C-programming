#include <stdio.h>

int main() {

    float d;
    int n;
    printf("enter a number = ");
    scanf("%f", &d);

    n = d;

    if (d < 1) {
        printf("the entered number is not a natural number\n");
    } else if (n != d) {
        printf("the entered number is not a natural number\n");
    } else {
        printf("the entered number is a natural number\n");
    }

    return 0;
}
