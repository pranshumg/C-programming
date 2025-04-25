#include <stdio.h>

int main() {

    char ch;
    printf("enter a character = ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122) {
        printf("the character %c is lowercase\n", ch);
    } else {
        printf("the character %c is not lowercase\n", ch);
    }

    return 0;
}