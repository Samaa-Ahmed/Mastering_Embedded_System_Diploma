/*
 ============================================================================
 Name        : EX1_Even_Or_Odd.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int num ;
	printf("Enter integer you want to check :");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d is Even",num);
	}
	else
	{
		printf("%d is Odd",num);
	}

	return 0;
}
