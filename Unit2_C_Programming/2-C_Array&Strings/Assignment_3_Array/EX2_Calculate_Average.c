/*
 ============================================================================
 Name        : EX2_Calculate_Average.c
 Author      : Samaa Ahmed
 Unit2     : Lesson4 Array&String >> Assignment3_Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int i,n;
	float array[100];
	float average=0,sum=0 ;

	printf("enter the number of data:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter number %d:",i+1);
		scanf("%f",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=array[i];
	}
	average=sum/n;
	printf("Average = %0.2f",average);
	return 0;
}
