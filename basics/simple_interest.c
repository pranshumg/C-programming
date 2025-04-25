#include <stdio.h>

int main() {

    int p, r, t; 
    printf("enter principal amount = ");
    scanf("%d", &p);
    printf("enter annual interest rate = ");
    scanf("%d", &r);
    printf("enter time = ");
    scanf("%d", &t);

    printf("simple interest = %d\n", (p * r * t) / 100);

    return 0;
}