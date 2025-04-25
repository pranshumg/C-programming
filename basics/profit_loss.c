#include <stdio.h>

int main() {

    int cp, sp; 
    printf("enter cost price = ");
    scanf("%d", &cp);
    printf("enter selling price = ");
    scanf("%d", &sp);

    if (cp > sp) {
        printf("the seller has made a loss of %d\n", (cp - sp));
    } else if (cp == sp) {
        printf("the seller did not earn anything\n");
    } else {
        printf("the seller has made a profit of %d\n", (sp - cp));
    }

    return 0;
}