#include <stdio.h>
#include <limits.h>  // for INT_MIN

void traverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, largest, sec_largest;

    printf("Enter number of elements in the array = ");
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    scanf("%d", &arr[0]);
    largest = arr[0];
    sec_largest = INT_MIN;

    for (int i = 1; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        } else if (arr[i] > sec_largest && arr[i] != largest) {
            sec_largest = arr[i];
        }
    }

    printf("array = ");
    traverse(arr, size);

    if (sec_largest == INT_MIN)
        printf("There is no second largest element (all elements may be equal).\n");
    else
        printf("The second largest element is = %d\n", sec_largest);

    return 0;
}
