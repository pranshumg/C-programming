#include <stdio.h>

int main() {

    int l, b; 
    printf("enter length = ");
    scanf("%d", &l);
    printf("enter breadth = ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= l; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}