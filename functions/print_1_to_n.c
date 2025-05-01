#include <stdio.h>

void print_1_to_n(int n) {

	if (n == 0) {
		return;
	} else {
		print_1_to_n(n - 1);
		printf("%d ", n);
	}
}

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	print_1_to_n(n);
	printf("\n");

	return 0;
}
