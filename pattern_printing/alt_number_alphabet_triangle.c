#include <stdio.h>

int main() {

	int n, m = 65;
	char ch;
	printf("enter number = ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			for (int j = 1; j <= i; j++) {
				printf("%d ", j);
			}
			printf("\n");
		} else {
			for (int k = 1; k <= i; k++, ch++, m++) {
				char ch = (char)m;
				printf("%c ", ch);
			}
			printf("\n");
		}
	}
	
	return 0;
}