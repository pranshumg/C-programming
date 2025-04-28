#include <stdio.h>

int sum(int x, int y) {

	printf("%d + %d = %d\n", x, y, x + y);
	return x + y;

}

int main() {

	int x, y;
	printf("enter 1st number = ");
	scanf("%d", &x);
	printf("enter 2nd number = ");
	scanf("%d", &y);

	sum(x, y);

	return 0;
	
}
