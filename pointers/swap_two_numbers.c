#include <stdio.h>

void swap(int *a, int *b) {

	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int x, y;
	printf("enter x = ");
	scanf("%d", &x);
	printf("enter y = ");
	scanf("%d", &y);

	swap(&x, &y);

	printf("After Swapping,\nx = %d\ny = %d\n", x, y);

	return 0;
}