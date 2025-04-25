#include <stdio.h>

int main() {

    float a, b, c;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    printf("average = %2f\n", (a + b + c) / 3);

    return 0;
}