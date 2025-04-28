#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int size) {

	int i = 0, j = size - 1;
	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

int main() {

	int arr[] = {4, 1, 5, 2, 3,};
	int size = sizeof(arr) / sizeof(int);

	printf("array = ");
	traverse(arr, size);

	reverse(arr, size);

	printf("reverse of array = ");
	traverse(arr, size);

	return 0;
}