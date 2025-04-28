#include <stdio.h>

int fact(int n) {

	if (n == 1 || n == 0) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	printf("factorial of %d = %d\n", n, fact(n));

	return 0;
}