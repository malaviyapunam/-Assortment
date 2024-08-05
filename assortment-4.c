#include <stdio.h>

int main() {
    int row, col;
    
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int a[row][col];
    

    printf("Enter the elements of the %dx%d array:\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++)
		 {
		 	printf("a[%d][%d]=",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    
    int rows,cols,rowSum = 0,colSum = 0;
    
    printf("Enter the row number to find sum: ");
    scanf("%d", &row);
    
    printf("Enter the column number to find sum: ");
    scanf("%d", &col);
    

    for (int j = 0; j < col; j++) 
	{
        rowSum += a[row][j];
    }
    
    for (int i = 0; i < row; i++) 
	{
        colSum += a[i][col];
    }
    
    printf("Elements of row %d:\n", rows);
    for (int j = 0; j < col; j++) 
	{
        printf("%d ", a[row][j]);
    }
    printf("\nSum of row %d: %d\n", rows, rowSum);
      
    
    printf("Elements of column %d:\n", cols);
    for (int i = 0; i < row; i++) 
	{
        printf("%d\n", a[i][col]);
    }
    printf("Sum of column %d: %d\n", cols, colSum);
    
    return 0;
}