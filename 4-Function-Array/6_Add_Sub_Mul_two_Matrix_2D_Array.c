// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>
#define SIZE 3  

void inputMatrix(int mat[SIZE][SIZE]) 
{
	int i,j;
    for (i = 0; i < SIZE; i++) 
	{
        for (j = 0; j < SIZE; j++) 
		{
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[SIZE][SIZE]) 
{
	int i,j;
    for (i = 0; i < SIZE; i++) 
	{
        for (j = 0; j < SIZE; j++) 
		{
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

main() 
{
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE], result[SIZE][SIZE];
    int i, j, k;

    
    printf("Enter elements of first matrix (3x3):\n");
    inputMatrix(mat1);

    
    printf("Enter elements of second matrix (3x3):\n");
    inputMatrix(mat2);

    
    printf("\nMatrix Addition:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    displayMatrix(result);

    
    printf("\nMatrix Subtraction:\n");
    for (i = 0; i < SIZE; i++) 
	{
        for (j = 0; j < SIZE; j++) 
		{
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
    displayMatrix(result);

    
    printf("\nMatrix Multiplication:\n");
    for (i = 0; i < SIZE; i++) 
	{
        for (j = 0; j < SIZE; j++) 
		{
            result[i][j] = 0;  
            for (k = 0; k < SIZE; k++) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    displayMatrix(result);
}

