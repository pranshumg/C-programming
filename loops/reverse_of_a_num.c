#include <stdio.h>

int main() {

    int num, rev = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    
    int temp = num, digit;
    
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    printf("Reverse of %d = %d\n", num, rev);

    return 0;
}
