#include <stdio.h>

int main() {

    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    int z;
    z = y;
    y = x;
    x = z;

    printf("After swapping,\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}