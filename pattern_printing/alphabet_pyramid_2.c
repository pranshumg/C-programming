#include <stdio.h>

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		char ch = (char)65;
		for (int j = 1; j <= (n - i); j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++, ch++) {
			printf("%c", ch);
		}
		for (int l = (i - 1), o = (int)ch, q = o - 2; l >= 1; l--, q--) {
			char ch1 = (char)q;
			printf("%c", ch1);
		}
		printf("\n");
	}

	return 0;
}