#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void maximum_element(int arr[], int size) {

	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("The maximum element out of all the elements in the array = %d\n", max);
}

int main() {

	int arr[] = {2, 4, 1, 0, 7, 5, 9};
	int size = sizeof(arr) / sizeof(int);
	
	printf("array = ");
	traverse(arr, size);

	maximum_element(arr, size);

	return 0;
}