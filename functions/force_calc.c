#include <stdio.h>

void force(float m) {

	float g = 9.8, f = m * g;
	printf("force of attraction on a body of mass %.2f exerted by earth = %.2f\n", m, f);

}

int main() {

	float m;
	printf("enter mass of body = ");
	scanf("%f", &m);

	force(m);

	return 0;
	
}