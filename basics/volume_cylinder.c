#include <stdio.h>

int main() {

    float r, h;
    printf("enter radius of cylinder = ");
    scanf("%f", &r);
    printf("enter height of cylinder = ");
    scanf("%f", &h);
    printf("volume of cylinder with radius %.2f and height %.2f is : %.2f\n", r, h, 3.14 * r * r * h);

    return 0;
}