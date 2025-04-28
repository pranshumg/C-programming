#include <stdio.h>

int fact(int n) {

	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

void perm(int n, int r) {

	if (r > n) {
		printf("Invalid input. r cannot be greater than n.\n");
	} else {
		int nPr = fact(n) / fact(n - r);
		printf("nPr with n = %d and r = %d = %d\n", n, r, nPr);
	}
}

int main() {

	int n, r;
	printf("enter n = ");
	scanf("%d", &n);
	printf("enter r = ");
	scanf("%d", &r);

	perm(n, r);

	return 0;
}