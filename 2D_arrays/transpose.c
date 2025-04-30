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

void transpose(int row, int col, int arr[][col], int transposed[][row]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			transposed[j][i] = arr[i][j];
		}
	}
}

int main() {
	int arr[10][10], row, col;
	printf("enter no. of rows = ");
	scanf("%d", &row);
	printf("enter no. of columns = ");
	scanf("%d", &col);

	input(row, col, arr);
	printf("\nmatrix :- \n");
	display(row, col, arr);

	int transposed[10][10];
	transpose(row, col, arr, transposed);
	printf("transpose :-\n");
	display(row, col, transposed);

	return 0;
}
