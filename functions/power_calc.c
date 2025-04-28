#include <stdio.h>

int power(int a, int b) {
	
	if (b == 0) {
		return 1;
	} else {
		return a * power(a, b - 1);
	}
}

int main() {

	int a, b;
	printf("enter base = ");
	scanf("%d", &a);
	printf("enter exponent = ");
	scanf("%d", &b);

	printf("%d raised to the power %d = %d\n", a, b, power(a, b));

	return 0;
}