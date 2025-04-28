#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	} 
	printf("\n");
}

void merge(int arr[], int start, int mid, int end) {

	int i = start, j = mid + 1, index = start, temp[100];

	while (i <= mid && j <= end) {
		if (arr[i] < arr[j]) {
			temp[index++] = arr[i++];
		} else {
			temp[index++]  =arr[j++];
		}
	}
	while (i <= mid) {
		temp[index++] = arr[i++];
	}
	while (j <= end) {
		temp[index++] = arr[j++];
	}

	for (int k = start; k <= end; k++) {
		arr[k] = temp[k];
	}
}

void merge_sort(int arr[], int start, int end) {
	
	if (start < end) {
		int mid = start + (end - start) / 2;

		merge_sort(arr, start, mid);
		merge_sort(arr, mid + 1, end);
		merge(arr, start, mid, end);
	}
}

int main() {

	int arr[] = {12, 31, 35, 8, 32, 17};
	int size = sizeof(arr) / sizeof(int);

	printf("original array = ");
	traverse(arr, size);

	merge_sort(arr, 0, size - 1);

	printf("sorted array = ");
	traverse(arr, size);

	return 0;
}