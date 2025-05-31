#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("Data1.txt", "r");
    fp2 = fopen("Data2.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Copy operation cancelled.\n");
    } else {
        while ((ch = fgetc(fp1)) != EOF) {
            fputc(ch, fp2);
        }
        fclose(fp1);
        fclose(fp2);
        printf("File copied successfully.\n");
    }

    return 0;
}