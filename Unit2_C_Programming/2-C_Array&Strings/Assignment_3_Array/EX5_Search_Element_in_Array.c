/*
 ============================================================================
 Name        : EX5_Search_Element_in_Array.c
  Author      : Samaa Ahmed
 Unit2     : Lesson4 Array&String >> Assignment3_Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int n,i ;
	int arr[100];
	int search;

	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched");
	scanf("%d",&search);

	for(i=0;i<n;i++)
	{
		if(search==arr[i])
		{
			printf("Number found at location: %d",i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("number not found");
	}
	return 0;
}
