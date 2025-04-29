#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	
	int arr[] = {2, 4, 1, 0, 7, 5, 9}, num;
	int size = sizeof(arr) / sizeof(int);
	
	printf("array = ");
	traverse(arr, size);
	
	printf("Enter number to find triplets with sum equal to it = ");
	scanf("%d", &num);

	int count = 0;

	for (int j = 0; j < size; j++) {
		for (int k = j + 1; k < size; k++) {
			for (int l = k + 1; l < size; l++) {
				if (arr[j] + arr[k] + arr[l] == num) {
					count++;
					printf("(%d, %d, %d)\n", arr[j], arr[k], arr[l]);
				}
			}
		}
	}

	printf("total triplets = %d\n", count);

	return 0;
}