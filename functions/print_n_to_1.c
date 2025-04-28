#include <stdio.h>

void print_n_to_1(int n) {

	if (n == 0) {
		return;
	} else {
		printf("%d ", n);
		return print_n_to_1(n - 1);
	}
}

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	print_n_to_1(n);
	printf("\n");

	return 0;
}