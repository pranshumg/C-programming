#include <stdio.h>

void traverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, largest;

    printf("Enter number of elements in the array = ");
    scanf("%d", &size);

    if (size < 1) {
        printf("Array must have at least one element.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    scanf("%d", &arr[0]);
    largest = arr[0];

    for (int i = 1; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("array = ");
    traverse(arr, size);

    printf("The largest element is = %d\n", largest);

    return 0;
}
