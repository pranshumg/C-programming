#include <stdio.h>

// prints table of a number in reverse order

int main() {

    int num, table;
    printf("enter number = ");
    scanf("%d", &num);
    printf("Table in reverse of %d :- \n", num);

    for (int i = 10; i >= 1; i--) {
        table = num * i;
        printf("%d\n", table);
    }

    return 0;
}