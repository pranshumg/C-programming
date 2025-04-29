#include <stdio.h>

void traverse(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void palindrome(int arr[], int size) {
	int brr[size];
	int i = 0, j = size - 1;
	while (j >= 0) {
		brr[i] = arr[j];
		i++;
		j--;
	}

	printf("reverse array = ");
	traverse(brr, size);

	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == brr[i]) {
			count++;
		} else {
			break;
		}
	}

	if (count == size) {
		printf("the given array is palindrome\n");
	} else {
		printf("the given array is not palindrome\n");
	}
}

int main() {
 	int arr[100]; 
    int size;

    printf("Enter the number of elements =  ");
    scanf("%d", &size);

    printf("Enter %d elements = \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
	
	printf("array = ");
	traverse(arr, size);

	palindrome(arr, size);

	return 0;
}