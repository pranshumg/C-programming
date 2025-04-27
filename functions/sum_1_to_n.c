#include <stdio.h>

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + sum(n - 1);
	}
}

int main()
{
	int n;
	printf("enter number : ");
	scanf("%d", &n);

	printf("sum : %d\n", sum(n));

	return 0;
}