#include <stdio.h>

void traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void pair_sum(int arr[], int size) {
	int count = 0, num;
	printf("Enter number to find pairs with sum equal to it = ");
	scanf("%d", &num);

	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			if (arr[i] + arr[j] == num) {
				count++;
				printf("(%d, %d)\n", arr[i], arr[j]);
			}
		}
	}

	printf("Total pairs = %d\n", count);
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

	pair_sum(arr, size);

	return 0;
}
