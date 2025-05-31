#include <stdio.h>

int main() {
    FILE *fp = fopen("Data.txt", "w");

    if (fp == NULL) {
        printf("File is not created.\n");
    } else {
        printf("File is created.\n");
        fclose(fp);
    }

    return 0;
}