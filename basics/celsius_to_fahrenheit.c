#include <stdio.h>

int main() {

    float c; 
    printf("enter temperature in celsius = ");
    scanf("%f", &c);
    printf("value in fahrenheit = %2f\n", ((9.0 / 5.0) * c) + 32);

    return 0;
}