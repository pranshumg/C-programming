#include <stdio.h>

void dec_to_inc(int n) {

	printf("%d ", n);
	if (n == 0) {
		return;
	} else {
		dec_to_inc(n - 1);
		printf("%d ", n);
	}
}

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	dec_to_inc(n);
	printf("\n");

	return 0;
}