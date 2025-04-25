#include <stdio.h>

int main() {

    int a;
    printf("enter number = ");
    scanf("%d", &a);

    if (a >= 0) {
        printf("absolute value = %d\n", a);
    } else {
        a = -a;
        printf("absolute value = %d\n", a);
    }
    
    return 0;
}