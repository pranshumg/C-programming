#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int*)calloc(3, sizeof(int)); 

    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("After calloc:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d ", ptr[i]);
    }

    ptr = (int*)realloc(ptr, 5 * sizeof(int));
    if (ptr == NULL) {
        printf("\nReallocation failed.\n");
        return 1;
    }

    for (int i = 3; i < 5; i++) {
        ptr[i] = 0;
    }

    printf("\nAfter realloc:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    
    return 0;
}
