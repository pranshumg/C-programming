#include <stdio.h>

int main() {

	int n, m;
	char ch;
	printf("enter number = ");
	scanf("%d", &m);

	for (int i = 1; i <= m; i++) {
		for (int j = 1, n = 65; j <= m; j++, n++, ch++) {
			char ch = (char)n;
			printf("%c ", ch);
		}
		printf("\n");
	}
	
	return 0;
}