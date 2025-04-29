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

int product_of_elements(int arr[], int size) {
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[100]; 
    int size;

    printf("Enter the number of elements = ");
    scanf("%d", &size);

    printf("Enter %d elements = \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("array = ");
    traverse(arr, size);

    printf("sum of elements = %d\n", sum_of_elements(arr, size));
    printf("product of elements = %d\n", product_of_elements(arr, size));

    return 0;
}
