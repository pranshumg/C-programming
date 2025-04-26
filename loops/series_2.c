#include <stdio.h>

// prints series = 4,7,10,13,16... upto n terms

int main() {

    int n; // n = number of terms
    printf("enter number of terms = ");
    scanf("%d", &n);

    // Method 1

    for (int i = 4; i <= 3 * n + 1; i = i + 3) {
        printf("%d ", i);
    }

    printf("\n");
    
    // Method 2
    
    int a = 4;
    for (int j = 1; j <= n; j++) {
        printf("%d ", a);
        a = a + 3;
    }

    printf("\n");

    return 0;
}