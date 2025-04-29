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
	int arr[] = {2, 4, 1, 0, 7, 5, 9};
	int size = sizeof(arr) / sizeof(int);

	printf("array = ");
	traverse(arr, size);

	pair_sum(arr, size);

	return 0;
}
