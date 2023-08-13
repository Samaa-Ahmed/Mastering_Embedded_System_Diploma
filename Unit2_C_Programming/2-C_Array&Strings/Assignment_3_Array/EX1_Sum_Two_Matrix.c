/*
 ============================================================================
 Name        : EX1_Sum_Two_Matrix.c
 Author      : Samaa Ahmed
 Unit2     : Lesson4 Array&String >> Assignment3_Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int r,c ;
	float matrix1[2][2] , matrix2[2][2] , sum[2][2];

	printf("Enter the elements of 1st matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d :", r+1,c+1);
			scanf("%f",&matrix1[r][c]);
		}
	}
	printf("Enter the elements of 2nd matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d :", r+1,c+1);
			scanf("%f",&matrix2[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=matrix1[r][c]+matrix2[r][c] ;
		}
	}
	printf("The sum of matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{ printf("%0.1f\t",sum[r][c]);
		}
		printf("\n");
	}

	return 0;
}
