#include <stdio.h>

int main() {

    int n;
    printf("enter number = ");
    scanf("%d", &n);

    int i = 1, fact = 1; 
    while (i <= n){
        fact = fact * i;
        i++;
    }

    printf("factorial of %d = %d\n", n, fact);
    return 0;
}