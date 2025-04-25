#include <stdio.h>

int main() {

    float x1, x2, x3, y1, y2, y3;
    printf("enter x coordinate of 1st point = ");
    scanf("%f", &x1);
    printf("enter y coordinate of 1st point = ");
    scanf("%f", &y1);
    printf("enter x coordinate of 2nd point = ");
    scanf("%f", &x2);
    printf("enter y coordinate of 2nd point = ");
    scanf("%f", &y2);
    printf("enter x coordinate of 3rd point = ");
    scanf("%f", &x3);
    printf("enter y coordinate of 3rd point = ");
    scanf("%f", &y3);

    float slope1, slope2;
    slope1 = (y2 - y1) / (x2 - x1), slope2 = (y3 - y2) / (x3 - x2);
    printf("slope between 1st and 2nd point = %.2f\n", slope1);
    printf("slope between 2nd and 3rd point = %.2f\n", slope2);

    if (slope1 == slope2) {
        printf("All three points fall on one straight line\n");
    } else {
        printf("All three points do not fall on one straight line\n");
    }

    return 0;
}