#include <stdio.h>

int main() {

	int s;
	printf("enter side of square = ");
	scanf("%d", &s);

	for (int i = 1; i <= s; i++) {
		for (int i = 1; i <= s; i++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}