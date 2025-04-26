#include <stdio.h>

// prints series - 3, 12, 48,.. upto n terms

int main() {

    int n; 
    printf("enter the number of terms = ");
    scanf("%d", &n);

    int a = 3;
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = a * 4;
    }

    printf("\n");
    
    return 0;
}