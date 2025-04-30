#include <stdio.h>
#include <string.h>

typedef struct cricketer {
	char name[20];
	int age;
	int notm; // notm = mumber of test matches
	float avg;
} cricketer;

int main() {
	cricketer arr[3];
 
	for (int i = 0; i < 3; i++) {
		printf("enter name = ");
		scanf(" %[^\n]s", arr[i].name);
		printf("enter age = ");
		scanf("%d", &arr[i].age);
		printf("enter no. of test matches = ");
		scanf("%d", &arr[i].notm);
		printf("enter average = ");
		scanf("%f", &arr[i].avg);
		printf("\n");
	}

	for (int i = 0; i < 3; i++) {
		printf("name = %s\n", arr[i].name);
		printf("age = %d\n", arr[i].age);
		printf("no. of test matches = %d\n", arr[i].notm);
		printf("average = %.2f\n", arr[i].avg);
		printf("\n");
	}

	return 0;
}
