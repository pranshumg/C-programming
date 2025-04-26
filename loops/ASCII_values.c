#include <stdio.h>

// prints ASCII values of uppercase alphabets

int main() {

    int n = 65;
    char ch = (char)n;

    while (n <= 90) {
        printf("%c =", ch);
        printf(" %d\n", n);
        n++;
        ch++;
    }
    
    return 0;
}