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

void multiplication(int row1, int col1, int row2, int col2, int arr[row1][col1], int brr[row2][col2], int crr[row1][col2]) {
	for (int h = 0; h < row1; h++) {
		for (int i = 0; i < col2; i++) {
			int element = 0;
			for (int j = 0; j < col1; j++) {
				element += arr[i][j] * brr[j][h];
			}
			crr[i][h] = element;
		}
	}
}

int main()
{
	int arr[10][10], brr[10][10], row1, col1, row2, col2;

	printf("for matrix 1,\n");
	printf("enter no. of rows = ");
	scanf("%d", &row1);
	printf("enter no. of columns = ");
	scanf("%d", &col1);

	printf("\nfor matrix 2,\n");
	printf("enter no. of rows = ");
	scanf("%d", &row2);
	printf("enter no. of columns = ");
	scanf("%d", &col2);

	if (col1 == row2) {
		printf("\nfor matrix 1,\n");
		input(row1, col1, arr);
		printf("\nmatrix 1 :-\n");
		display(row1, col1, arr);
		printf("\n");

		printf("for matrix 2,\n");
		input(row2, col2, brr);
		printf("\nmatrix 2 :-\n");
		display(row2, col2, brr);
		printf("\n");

		int crr[10][10];
		multiplication(row1, col1, row2, col2, arr, brr, crr);
		printf("multiplication of matrix :- \n");
		display(row1, col2, crr);
	}
	else {
		printf("\nmultiplication is not possible.\n");
	}

	return 0;
}
