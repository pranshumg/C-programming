#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(int *a, int *b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int arr[], int size) {

	for (int i = 0; i < size - 1; i++) {
		int smallest_index = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[smallest_index]) {
				smallest_index = j;
			}
		}
		swap(&arr[i], &arr[smallest_index]);
	}
}

int main() {

	int arr[] = {4, 1, 5, 2, 3};
	int size = sizeof(arr) / sizeof(int);

	printf("original array = ");
	traverse(arr, size);

	selection_sort(arr, size);

	printf("sorted array = ");
	traverse(arr, size);

	return 0;
}