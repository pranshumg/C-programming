#include <stdio.h>

// prints series - 100, 97, 94,.. upto all terms which are positive

int main() {

    int n;
    printf("enter the number of terms = ");
    scanf("%d", &n);

    int a = 100;
    for (int i = 1; i <= n; i++) {
        if (a > 0) {
            printf("%d ", a);
            a = a - 3;
        }
    }
    
    return 0;
}