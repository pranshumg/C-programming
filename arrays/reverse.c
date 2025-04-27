#include <stdio.h>

int main() {

	int n;
	printf("enter no. of elements = ");
	scanf("%d", &n);

	int arr[n];

	for (int i = 0; i < n; i++) {
		printf("enter element %d : ",i + 1);
		scanf("%d", &arr[i]);
	}

	for (int i = n - 1; i >= 0; i--) {
		printf("\narr[%d] : %d", i, arr[i]);
	}

	printf("\n");

	return 0;
}