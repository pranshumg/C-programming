#include <stdio.h>

int main() {
    if (remove("Data.txt") == 0) {
        printf("File is deleted.\n");
    } else {
        perror("Error");
    }

    return 0;
}