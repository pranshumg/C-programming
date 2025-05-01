#include <stdio.h>

void traverse(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int binary_search(int arr[], int size, int target) {
    int start = 0, end = size - 1;
    while (start <= end) {  // fixed from < to <=
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);

    printf("array = ");
    traverse(arr, size);

    int target;
    printf("enter element you want to search = ");
    scanf("%d", &target);

    int result = binary_search(arr, size, target);
    if (result != -1)
        printf("element found at index = %d\n", result);
    else
        printf("element not found.\n");

    return 0;
}
