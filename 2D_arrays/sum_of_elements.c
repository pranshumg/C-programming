#include <stdio.h>

void input(int row, int col, int arr[][col]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("enter element with row %d and column %d = ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
}

void display(int row, int col, int arr[][col]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}	
}

int sum_of_matrix(int row, int col, int arr[][col]) {
	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum = sum + arr[i][j];
		}
	}
	return sum;
}

int main() {
	int arr[10][10], row, col;
	printf("enter no. of rows = ");
	scanf("%d", &row);
	printf("enter no. of columns = ");
	scanf("%d", &col);
	
	input(row, col, arr);
    printf("\nmatrix :-\n");
	display(row, col, arr);

	printf("\nsum of elements = %d\n", sum_of_matrix(row, col, arr));

	return 0;
}