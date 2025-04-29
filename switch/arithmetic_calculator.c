#include <stdio.h>

int main() {

	int n, m;
	char ch;
	printf("enter an expression (e.g., 7 + 4) = ");
	scanf("%d %c %d", &n, &ch, &m);

	switch (ch) {
	case '+':
	printf("%d %c %d = %d\n", n, ch, m, n + m);
		break;
	case '-':
	printf("%d %c %d = %d\n", n, ch, m, n - m);
		break;
	case '*':
	printf("%d %c %d = %d\n", n, ch, m, n * m);
		break;
	case '/':
		if (m == 0) {
			printf("Error: Division by zero is not allowed!\n");
		} else {
			printf("%d %c %d = %d\n", n, ch, m, n / m);
		}
		break;
	case '%':
		if (m == 0) {
			printf("Error: Division by zero is not allowed!\n");
		} else {
			printf("%d %c %d = %d\n", n, ch, m, n % m);
		}
		break;
	default:
		printf("Invalid operator! Please enter arithmetic operator\n");
	}

	return 0;
}