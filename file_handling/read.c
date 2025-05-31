#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("Data.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    }

    return 0;
}