#include <stdio.h>

int main() {

	int n;
	printf("enter no. of lines = ");
	scanf("%d", &n);

	int nsp = 1, nst = n - 1;  // nsp = no. of spaces, nst = no. of stars
	for (int i = 1; i <= ((2 * n) - 1); i++) {
		printf("*");
	}
	printf("\n");
	for (int i = 1; i <= (n - 1); i++) {
		for (int j = 1; j <= nst; j++) {
			printf("*");
		}
		for (int k = 1; k <= nsp; k++) {
			printf(" ");
		}
		for (int j = 1; j <= nst; j++) {
			printf("*");
		}
		printf("\n");
		nst--;
		nsp = nsp + 2;
	}
	
	return 0;
}