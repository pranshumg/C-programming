#include <stdio.h>

int power_log(int a, int b) {

	if (b == 0) {
		return 1;
	}
	int c = powlog(a, b / 2);
	if (b % 2 == 0) {
		return c * c;
	} else {
		return c * c * a;
	}
}

int main() {

	int a, b;
	printf("enter base = ");
	scanf("%d", &a);
	printf("enter exponent = ");
	scanf("%d", &b);

	printf("%d raised to the power %d = %d\n", a, b, powlog(a, b));

	return 0;
}