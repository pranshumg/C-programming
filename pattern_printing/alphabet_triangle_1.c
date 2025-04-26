#include <stdio.h>

int main() {

	int n;
	char ch;
	printf("enter number = ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1, m = 65; j <= i; j++, ch++, m++) {
			char ch = (char)m;
			printf("%c ", ch);
		}
		printf("\n");
	}
		
	return 0;
}