#include <stdio.h>

int main() {
    FILE *fp;
    char str[255];
    int i = 0;

    fp = fopen("Data.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file.\n");
    } else {
        printf("Enter the data in file: ");
        fgets(str, sizeof(str), stdin);

        fputs(str, fp);
        fclose(fp);
        printf("Data written to file successfully.\n");
    }

    return 0;
}