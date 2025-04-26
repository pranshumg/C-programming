#include <stdio.h>

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	if (n % 2 == 0) {
		printf("star is not possible\n");
	} else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j == (n / 2) + 1 || i == (n / 2) + 1) {
					printf("*");
				} else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
