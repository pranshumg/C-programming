#include <stdio.h>

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int m = 1;
		for (int j = 1; j <= (n - i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++, m++) {
			printf("%d", m);
		}
		for (int l = (i - 1); l >= 1; l--) {
			printf("%d", l);
		}
		printf("\n");
	}
	
	return 0;
}