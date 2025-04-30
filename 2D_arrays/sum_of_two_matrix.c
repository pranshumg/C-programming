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

void add_matrices(int row, int col, int arr[][col], int brr[][col], int sum[][col]) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum[i][j] = arr[i][j] + brr[i][j];
		}
	}
}

int main() {
	int arr[10][10], brr[10][10], row, col;
	printf("enter no. of rows = ");
	scanf("%d", &row);
	printf("enter no. of columns = ");
	scanf("%d", &col);

	printf("\nfor 1st matrix,\n");
	input(row, col, arr);
	printf("\nmatrix 1 :- \n");
	display(row, col, arr);

	printf("\nfor 2nd matrix,\n");
	input(row, col, brr);
	printf("\nmatrix 2 :- \n");
	display(row, col, brr);

	int sum[10][10];
	add_matrices(row, col, arr, brr, sum);
	printf("\nsum of matrix :- \n");
	display(row, col, sum);

	return 0;
}