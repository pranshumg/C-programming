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

int partition(int arr[], int start, int end) {

	int index = start - 1, pivot = arr[end];

	for (int j = start; j < end; j++) {
		if (arr[j] <= pivot) {
			index++;
			swap(&arr[j], &arr[index]);
		}
	}
	index++;
	swap(&arr[index], &arr[end]);

	return index;
}

void quick_sort(int arr[], int start, int end) {

	if (start < end) {
		int pivot_index = partition(arr, start, end);
		quick_sort(arr, start, pivot_index - 1);
		quick_sort(arr, pivot_index + 1, end);
	}
}

int main() {

	int arr[] = {5, 2, 6, 4, 1, 3};
	int size = sizeof(arr) / sizeof(int);

	printf("original array = ");
	traverse(arr, size);

	quick_sort(arr, 0, size - 1);

	printf("sorted array = ");
	traverse(arr, size);

	return 0;
}