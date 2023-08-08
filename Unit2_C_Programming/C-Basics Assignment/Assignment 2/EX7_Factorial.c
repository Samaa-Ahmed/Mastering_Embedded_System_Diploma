/*
 ============================================================================
 Name        : EX7_Factorial.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int n,i;
	int factorial=1;
	printf("Enter an integer:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("ERROR! Factorial of Negative Number Doesn't Exist ");
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			factorial*=i ;
		}
	printf("Factorial=%d",factorial);
	}
	return 0;
}
