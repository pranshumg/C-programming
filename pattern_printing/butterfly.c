#include <stdio.h>

int main() {

    int r;
    printf("Enter number = ");
    scanf("%d", &r);

    int nsp = (2 * r) - 2; // nsp = no. of spaces
    int nst = 1; // nst = no. of stars

    for (int i = 1; i < r; i++) {
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++) {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++) {
            printf("*");
        }
        nst++;
        nsp -= 2;
        printf("\n");
    }
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2 * r; j++) {
            printf("*");
        }
        printf("\n");
    }
    nst--;
    nsp += 2;
    for (int i = 1; i < r; i++) {
        for (int j = 1; j <= nst; j++) {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++) {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++) {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}