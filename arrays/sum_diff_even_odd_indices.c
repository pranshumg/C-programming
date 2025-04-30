#include <stdio.h>

void traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void sum_diff_even_odd_indices(int arr[], int size) {
	int odd_sum = 0, even_sum = 0;
	for (int i = 0; i < size; i++) {
		if (i % 2 != 0) {
			odd_sum += arr[i];
		} else {
			even_sum += arr[i];
		}
	}

	printf("difference (even - odd) = %d\n", even_sum - odd_sum);
}


int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = sizeof(arr) / sizeof(int);

	printf("array = ");
	traverse(arr, size);

	sum_diff_even_odd_indices(arr, size);

	return 0;
}