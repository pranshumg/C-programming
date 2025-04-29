#include <stdio.h>

void traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void triplet_sum(int arr[], int size) {
	int count = 0, num;
	printf("Enter number to find triplets with sum equal to it = ");
	scanf("%d", &num);

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			for (int k = j + 1; k < size; k++) {
				if (arr[i] + arr[j] + arr[k] == num) {
					count++;
					printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
				}
			}
		}
	}

	printf("total triplets = %d\n", count);
}

int main() {
	int arr[100], size;

	printf("enter the no. of elements = ");
	scanf("%d", size);

	printf("enter %d elements = \n", size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("array = ");
	traverse(arr, size);
	
	triplet_sum(arr, size);

	return 0;
}