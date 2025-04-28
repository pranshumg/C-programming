#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void bubble_sort(int arr[], int size) {

	int temp;
	for (int j = 0; j < size - 1; j++) {
		for (int k = 0; k < size - j - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
}

int main() {

	int arr[] = {4, 1, 5, 2, 3};
	int size = sizeof(arr) / sizeof(int);

	printf("array = ");
	traverse(arr, size);

	bubble_sort(arr, size);

	printf("sorted array = ");
	traverse(arr, size);

	return 0;
}