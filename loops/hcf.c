#include <stdio.h>

int main()
{
    int n1, n2, h;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int o_n1 = n1, o_n2 = n2;

    int min_val = n1 < n2 ? n1 : n2;

    for (int i = 1; i <= min_val; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            h = i;
        }
    }

    printf("HCF of %d and %d is %d\n", o_n1, o_n2, h);

    return 0;
}