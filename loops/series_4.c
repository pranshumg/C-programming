#include <stdio.h>

// prints series - 1,2,4,8,16,... upto n terms

int main() {

    int n; 
    printf("enter the number of terms = ");
    scanf("%d", &n);

    int a = 1;
    for (int i = 1; i <= n; i++){
        printf("%d ", a);
        a = a * 2;
    }

    printf("\n");
    
    return 0;
}