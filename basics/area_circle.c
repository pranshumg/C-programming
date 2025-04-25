#include <stdio.h>

int main() {

    float r; 
    printf("enter radius of circle = ");
    scanf("%f", &r);
    printf("area of circle with radius %f = %.2f\n", r, 3.14 * r * r);

    return 0;
}