#include <stdio.h>

int main() {

    float r; 
    printf("enter radius of sphere = ");
    scanf("%f", &r);
    printf("volume of sphere with radius %f is : %.2f\n", r, (4.0 / 3.0) * 3.14 * r * r * r);

    return 0;
}