#include <stdio.h>

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	int m = 1;
	for (int i = 1; i <= n; i++) {
		int l = 1;
		for (int j = 1; j <= (n - i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= m; k++) {
			printf("%d", l);
			l++;
		}
		printf("\n");
		m = m + 2;
	}
	
	return 0;
}