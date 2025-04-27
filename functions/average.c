#include <stdio.h>

float average(float a, float b, float c) {

	return (a + b + c) / 3;
}

int main() {

	float x, y, z;
	printf("enter 1st number = ");
	scanf("%f", &x);
	printf("enter 2nd number = ");
	scanf("%f", &y);
	printf("enter 3rd number = ");
	scanf("%f", &z);

	printf("average = %.2f\n", average(x, y, z));

	return 0;
}