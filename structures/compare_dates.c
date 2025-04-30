#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct date {
	int day;
	char month[15];
	int year;
} Date;

int main() {
	Date a, b;

	// 08-06-2005
	a.day = 8;
	strcpy(a.month, "June");
	a.year = 2005;

	// 24-06-2005
	b.day = 24;
	strcpy(b.month, "June");
	b.year = 2005;

	bool flag = true;
	if (a.day != b.day) {
		flag = false;
	}
	if (strcmp(a.month, b.month) != 0) {
		flag = false;
	}
	if (a.year != b.year) {
		flag = false;
	}

	if (flag == true) {
		printf("dates are equal!\n");
	} else {
		printf("dates are not equal!\n");
	}

	return 0;
}