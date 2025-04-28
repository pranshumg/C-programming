#include <stdio.h>

int fact(int n) {

	if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}

}

int comb(int n, int r) {

	int nCr = fact(n) / (fact(r) * fact(n - r));
	printf("%d ", nCr);
	return nCr;

}

int main() {

	int n;
	printf("enter no. of lines = ");
	scanf("%d", &n);

	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j <= (n - 1 - i); j++) {
			printf(" ");
		}
		for (int k = 0; k <= i; k++) {
			comb(i, k);
		}
		printf("\n");
	}

	return 0;
	
}
