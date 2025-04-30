#include <stdio.h>
#include <string.h>

typedef struct book {
	char name[50];
	float price;
	int nop;  // nop = number of pages
} Book;

int main() {
	Book x, y, z;

	strcpy(x.name, "geronimo stilton");
	x.price = 150;
	x.nop = 210;

	printf("%s\n", x.name);
	printf("%.2f\n", x.price);
	printf("%d\n\n", x.nop);

	strcpy(y.name, "star wars");
	y.price = 650;
	y.nop = 160;

	printf("%s\n", y.name);
	printf("%.2f\n", y.price);
	printf("%d\n\n", y.nop);

	strcpy(z.name, "marvel's avengers");
	z.price = 350;
	z.nop = 260;

	printf("%s\n", z.name);
	printf("%.2f\n", z.price);
	printf("%d\n", z.nop);

	return 0;
}