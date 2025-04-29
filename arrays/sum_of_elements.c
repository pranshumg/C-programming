#include <stdio.h>

void traverse(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int sum_of_elements(int arr[], int size) {

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {

	int arr[] = {2, 4, 1, 0, 7, 5, 9}, num;
	int size = sizeof(arr) / sizeof(int);
	
	printf("array = ");
	traverse(arr, size);

	printf("sum of elements of array = %d\n", sum_of_elements(arr, size));

	return 0;
}