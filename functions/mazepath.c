#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {

	int rw = 0, dw = 0;
	if (cr == er && cc == cr) {
		return 1;
	}
	if (cr == er) {
		rw = rw + maze(cr, cc + 1, er, ec);
	}
	if (cc == ec) {
		dw = dw + maze(cr + 1, cc, er, ec);
	}
	if (cr < er && cc < ec) {
		rw = rw + maze(cr, cc + 1, er, ec);
		dw = dw + maze(cr + 1, cc, er, ec);
	}

	int tw = rw + dw;
	return tw;
}

int main() {

	int r, c;
	printf("enter no. of rows = ");
	scanf("%d", &r);
	printf("enter no. of columns = ");
	scanf("%d", &c);

	printf("no. of ways to reach from (1, 1) to (%d, %d) = %d\n", r, c, maze(1, 1, r, c));

	return 0;
}