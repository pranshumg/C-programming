#include <stdio.h>

int main() {

    int i;   // i = income
    float t; // t = tax

    printf("enter your annual income in rupees = ");
    scanf("%d", &i);

    if (i >= 250000 && i <= 500000) {
        t = 0.05 * (i - 250000);
        printf("total tax you need to pay to the government = %f\n", t);
    } else if (i > 500000 && i <= 1000000) {
        t = 0.05 * (500000 - 250000) + 0.2 * (i - 500000);
        printf("total tax you need to pay to the government = %f\n", t);
    } else if (i > 1000000) {
        t = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (i - 1000000);
        printf("total tax you need to pay to the government = %f\n", t);
    } else {
        t = 0;
        printf("total tax you need to pay to the government = %f\n", t);
    }

    return 0;
}