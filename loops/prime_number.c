#include <stdio.h>

int main() {

    int n;
    printf("Enter number = ");
    scanf("%d", &n);

    int comp = 0;
    for (int d = 2; d <= n - 1; d++) {
        if (n % d == 0) {
            comp = 1;
            break;
        }
    }

    if (n == 1) {
        printf("%d is neither a prime nor a composite number\n", n);
    } else if (comp == 0) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is a composite number\n", n);
    }

    return 0;
}