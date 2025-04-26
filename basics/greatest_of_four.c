#include <stdio.h>

int main() {

    int a, b, c, d;
    printf("enter first number = ");
    scanf("%d", &a);
    printf("enter second number = ");
    scanf("%d", &b);
    printf("enter third number = ");
    scanf("%d", &c);
    printf("enter fourth number = ");
    scanf("%d", &d);

    // Method 1

    if (a >= b && a >= c && a >= d) {
        printf("%d is greatest\n", a);
    } else if (b >= a && b >= c && b >= d) {
        printf("%d is greatest\n", b);
    } else if (c >= a && c >= b && c >= d) {
        printf("%d is greatest\n", c);
    } else {
        printf("%d is greatest\n", d);
    }

    // Method 2

    if (a >= b) {
        if (a >= c) {
            if (a >= d) {
                printf("%d is greatest\n", a);
            } else {
                printf("%d is greatest\n", d);
            }
        } else if (c >= d) {
            printf("%d is greatest\n", c);
        } else {
            printf("%d is greatest\n", d);
        }
    } else if (b >= a) {
        if (b >= c) {
            if (b >= d) {
                printf("%d is greatest\n", b);
            } else {
                printf("%d is greatest\n", d);
            }
        } else if (c >= d) {
            printf("%d is greatest\n", c);
        } else {
            printf("%d is greatest\n", d);
        }
    } else if (c >= a) {
        if (c >= b) {
            if (c >= d) {
                printf("%d is greatest\n", c);
            } else {
                printf("%d is greatest\n", d);
            }
        } else if (b >= d) {
            printf("%d is greatest\n", b);
        } else {
            printf("%d is greatest\n", d);
        }
    } else if (d >= a) {
        if (d >= b) {
            if (d >= c) {
                printf("%d is greatest\n", d);
            } else {
                printf("%d is greatest\n", c);
            }
        } else if (b >= c) {
            printf("%d is greatest\n", b);
        } else {
            printf("%d is greatest\n", c);
        }
    } else {
        printf("all the numbers are equal\n");
    }

    return 0;
}