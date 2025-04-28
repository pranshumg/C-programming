#include <stdio.h>

int powlog(int a, int b)
{
	if (b == 0)
	{
		return 1;
	}
	int c = powlog(a, b / 2);
	if (b % 2 == 0)
	{
		return c * c;
	}
	else
	{
		return c * c * a;
	}
}

int main()
{
	int x, y;
	printf("enter base : ");
	scanf("%d", &x);
	printf("enter exponent : ");
	scanf("%d", &y);

	printf("%d raised to the power %d is %d\n", x, y, powlog(x, y));

	return 0;
}