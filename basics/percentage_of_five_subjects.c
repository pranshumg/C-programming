#include <stdio.h>

int main() {

    float marks1, marks2, marks3, marks4, marks5;
    printf("enter 1st subject marks = ");
    scanf("%f", &marks1);
    printf("enter 2nd subject marks = ");
    scanf("%f", &marks2);
    printf("enter 3rd subject marks = ");
    scanf("%f", &marks3);
    printf("enter 4th subject marks = ");
    scanf("%f", &marks4);
    printf("enter 5th subject marks = ");
    scanf("%f", &marks5);

    printf("percentage = 2%f\n", (marks1 + marks2 + marks3 + marks4 + marks5) / 5);

    return 0;
}