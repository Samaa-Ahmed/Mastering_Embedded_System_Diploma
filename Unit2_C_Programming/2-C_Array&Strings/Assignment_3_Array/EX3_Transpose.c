/*
 ============================================================================
 Name        : EX3_Transpose.c
 Author      : Samaa Ahmed
 Unit2     : Lesson4 Array&String >> Assignment3_Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
setbuf(stdout,NULL);

int a[10][10],t[10][10];
int r,c;
int i,j;

printf("enter size of matrix:");
scanf("%d %d",&r,&c);

printf("enter elements of matrix:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("Enter a%d%d :", i+1,j+1);
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{ t[j][i]=a[i][j];

	}
}
printf("The entered matrix:\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
printf("The transpose matrix:\n");
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		printf("%d\t",t[i][j]);
	}
	printf("\n");
}
	return 0;
}
