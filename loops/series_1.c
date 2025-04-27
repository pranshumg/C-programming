#include <stdio.h>

// prints series = 1, 3, 5, 7, 9,.... upto n terms

int main() { 

    int n; 
    printf("enter number of terms = ");
    scanf("%d", &n);

    // Method 1

    for (int i = 1; i <= 2 * n - 1; i = i + 2) {
        printf("%d ", i);
    }

    printf("\n");
    
    // Method 2
    
    int a = 1;
    for (int j = 1; j <= n; j++) {
        printf("%d ", a);
        a = a + 2;
    }
    
    printf("\n");
    
    return 0;
}