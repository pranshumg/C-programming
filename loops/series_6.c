#include <stdio.h>

// prints series - 100, 50, 25,.. upto n terms

int main() {

    int n; 
    printf("enter the number of terms = ");
    scanf("%d", &n);

    float a = 100;
    for (int i = 1; i <= n; i++) {
        printf("%.2f ", a);
        a = a * (0.5);
    }

    printf("\n");

    return 0;
}