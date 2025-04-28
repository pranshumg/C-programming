#include <stdio.h>

void prime_factors(int n) {

    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    if (n > 2) {
        printf("%d", n);
    }

}


int main() {

	int n;
	printf("enter number = ");
	scanf("%d", &n);

	prime_factors(n);
	printf("\n");

	return 0;
	
}