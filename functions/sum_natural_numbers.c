#include <stdio.h>

int natural_num(int n) {

	if (n == 1) {
		return 1;
	} else {
		return n + natural_num(n - 1);
	}

}

int main() {

	int n;
	printf("enter number of terms = ");
	scanf("%d", &n);

	printf("sum of 1st %d natural numbers = %d\n", n, natural_num(n));

	return 0;
}