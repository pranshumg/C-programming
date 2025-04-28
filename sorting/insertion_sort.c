#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void insertion_sort(int arr[], int size) {

	for (int i = 1; i < size; i++) {
		int curr = arr[i], prev = i - 1;
		while (prev >= 0 && arr[prev] > curr) {
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = curr;
	}
}

int main() {

	int arr[] = {4, 1, 5, 2, 3};
	int size = sizeof(arr) / sizeof(int);

	printf("original array : ");
	traverse(arr, size);

	insertion_sort(arr, size);

	printf("sorted array : ");
	traverse(arr, size);

	return 0;
}