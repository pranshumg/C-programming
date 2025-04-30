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

void rotate_90_deg_cw(int row, int col, int arr[][col]) {
	for (int i = 0; i < col; i++) {
		for (int j = 1; j <= row; j++) {
			printf("%d ", arr[row - j][i]);
		}
		printf("\n");
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

	printf("\nafter rotating 90 degree clockwise, matrix :-\n");
	rotate_90_deg_cw(row, col, arr);

	return 0;
}
