#include <stdio.h>

int main() {

    float m; 
    printf("enter marks = ");
    scanf("%f", &m);

    if (m >= 91 && m <= 100) {
        printf("Excellent\n");
    } else if (m >= 81 && m < 91) {
        printf("Very Good\n");
    } else if (m >= 71 && m < 81) {
        printf("Good\n");
    } else if (m >= 61 && m < 71) {
        printf("Can do better\n");
    } else if (m >= 51 && m < 61) {
        printf("Average\n");
    } else if (m >= 41 && m < 51) {
        printf("Below average\n");
    } else if (m >= 0 && m < 41) {
        printf("Fail\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}