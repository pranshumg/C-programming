#include <stdio.h>

int main() {

    int n;
    printf("enter number = ");
    scanf("%d", &n);

    int v;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            v = 1;
        } else {
            v = 0;
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ", v);
            if (v == 0) {
                v = 1;
            } else {
                v = 0;
            }
        }
        printf("\n");
    }

    return 0;
}