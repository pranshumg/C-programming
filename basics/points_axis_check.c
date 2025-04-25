#include <stdio.h>

int main() {

    int x, y;
    printf("enter x coordinate = ");
    scanf("%d", &x);
    printf("enter y coordinate = ");
    scanf("%d", &y);

    if (y == 0) {
        printf("(%d,%d) lies on x - axis\n", x, y);
    } else if (x == 0) {
        printf("(%d,%d) lies on y - axis\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("(%d,%d) lies on origin\n", x, y);
    } else{
        printf("(%d,%d)", x, y);
    }

    return 0;
}