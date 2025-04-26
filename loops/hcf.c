#include <stdio.h>

int main()
{
	int num1, num2, hcf;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	int original_num1 = num1, original_num2 = num2;

	int min_value = num1 < num2 ? num1 : num2;

	for (int i = 1; i <= min_value; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			hcf = i;
		}
	}

	printf("HCF of %d and %d is %d\n", original_num1, original_num2, hcf);

	return 0;
}
