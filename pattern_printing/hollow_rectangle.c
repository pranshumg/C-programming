#include <stdio.h>

int main() {

	int l, b;
	printf("enter length of rectangle = ");
	scanf("%d", &l);
	printf("enter breadth of rectangle = ");
	scanf("%d", &b);

	for (int i = 1; i <= b; i++) {
		for (int j = 1; j <= l; j++) {
			if ((i >= 2 && i <= (b - 1)) && j >= 2 && j <= (l - 1)) {
				printf("  ");
			} else {
				printf("* ");
			}
		}
		printf("\n");
	}

	return 0;
}