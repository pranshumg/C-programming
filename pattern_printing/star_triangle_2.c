#include <stdio.h>

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);
	int og = n;

	for (int i = 1; i <= og; i++, n = n - 1) {
		for (int j = 1; j <= n; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}