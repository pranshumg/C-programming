#include <stdio.h>

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (target == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 9, 5};
    int size = sizeof(arr) / sizeof(int);

    printf("array = ");
    display(arr, size);

    int target;
    printf("enter element you want to search = ");
    scanf("%d", &target);

    printf("%d\n", linearSearch(arr, size, target));

    return 0;
}
