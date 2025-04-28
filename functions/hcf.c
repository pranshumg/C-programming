#include <stdio.h>

void HCF(int n1, int n2) {

	int hcf, og_n1 = n1, og_n2 = n2;

    int min_val = n1 < n2 ? n1 : n2;

    for (int i = 1; i <= min_val; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d = %d\n", og_n1, og_n2, hcf);
}

int main() {

	int n1, n2;
	printf("enter 1st number = ");
	scanf("%d", &n1);
	printf("enter 2nd number = ");
	scanf("%d", &n2);

	HCF(n1, n2);

	return 0;
}