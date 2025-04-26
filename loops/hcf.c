#include <stdio.h>

int main()
{
    int n1, n2, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int og_n1 = n1, og_n2 = n2;

    int min_val = n1 < n2 ? n1 : n2;

    for (int i = 1; i <= min_val; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", og_n1, og_n2, hcf);

    return 0;
}