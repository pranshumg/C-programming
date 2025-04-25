#include <stdio.h>

int main() {

    float marks1, marks2, marks3;
    printf("enter 1st subject marks = ");
    scanf("%f", &marks1);
    printf("enter 2nd subject marks = ");
    scanf("%f", &marks2);
    printf("enter 3rd subject marks = ");
    scanf("%f", &marks3);

    float perc = (marks1 + marks2 + marks3) / 3; 
    printf("percentage = %.2f\n", perc);

    if (perc >= 40 && marks1 >= 33 && marks2 >= 33 && marks3 >= 33) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    return 0;
}