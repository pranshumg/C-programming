#include <stdio.h>

void cel_to_fahr(float cel) {

	float fahr = (cel * (9.0 / 5)) + 32;
	printf("%.2f in fahrenheit = %.2f\n", cel, fahr);

}

int main() {

	float cel;
	printf("enter temperature in celsius = ");
	scanf("%f", &cel);

	cel_to_fahr(cel);

	return 0;
}