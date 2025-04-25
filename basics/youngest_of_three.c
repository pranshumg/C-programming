#include <stdio.h>

int main() {

    int a, b, c; 
    printf("enter 1st person age = ");
    scanf("%d", &a);
    printf("enter 2nd person age = ");
    scanf("%d", &b);
    printf("enter 3rd person age = ");
    scanf("%d", &c);

    if (a < b && a < c) {
        printf("1st person is the youngest\n");
    } else if (b < a && b < c) {
        printf("2nd person is the youngest\n");
    } else {
        printf("3rd person is the youngest\n");
    }

    return 0;
}