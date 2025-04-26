#include <stdio.h>

int main() {

	int n;
	printf("enter no. of lines = ");
	scanf("%d", &n);

	int nsp = 1, num = n + 1, num1 = n, m = n; // nsp = no. of spaces
	for (int i = 1; i <= ((2 * n) - 1); i++) {
		printf("%d", i);
	}
	printf("\n");
	for (int i = 1; i <= (n - 1); i++) {
		for (int j = 1; j <= (m - 1); j++) {
			printf("%d", j);
		}
		for (int k = 1; k <= nsp; k++) {
			printf(" ");
		}
		for (int j = 1; j <= (m - 1); j++, num++) {
			printf("%d", num);
		}
		printf("\n");
		nsp = nsp + 2;
		m--;
		num1++;
		num = num1 + 1;
	}

	return 0;
}