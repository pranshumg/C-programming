#include <stdio.h>

int fact(int n) {

	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

void combination(int n, int r) {

	if (r > n) {
		printf("Invalid input. r cannot be greater than n.\n");
	} else {
		int nCr = (fact(n)) / (fact(r) * fact(n - r));
		printf("nCr with n = %d and r = %d = %d\n", n, r, nCr);
	}
}

int main() {

	int n, r;
	printf("enter n = ");
	scanf("%d", &n);
	printf("enter r = ");
	scanf("%d", &r);

	combination(n, r);

	return 0;
}
