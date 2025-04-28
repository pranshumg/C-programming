#include <stdio.h>

int print_1_to_n(int n) {

	if (n == 0) {
		return 0;
	} else {
		print_1_to_n(n - 1);
		printf("%d ", n);
	}
	return 0;
}

int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	print_1_to_n(n);
	printf("\n");

	return 0;
}
