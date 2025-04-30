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

void row_with_max_sum(int row, int col, int arr[][col]) {
	int max = 0, row_no = 1;

	for (int j = 0; j < col; j++) {
		max += arr[0][j];
	}

	for (int i = 1; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		if (sum > max) {
			max = sum;
			row_no = i + 1;
		}
	}
	printf("\nRow no. with maximum sum = %d\n", row_no);
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

	row_with_max_sum(row, col, arr);

	return 0;
}