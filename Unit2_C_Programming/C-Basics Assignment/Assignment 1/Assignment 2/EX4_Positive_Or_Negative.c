/*
 ============================================================================
 Name        : EX4_Positive_Or_Negative.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	float num;
	printf("Enter a Number:");
	scanf("%f",&num);
	if(num>0)
	{
		printf("%f is Positive", num);
	}
	else if(num<0)
	{
		printf("%f is Negative", num);
	}
	else
	{
		printf("%f is Zero", num);
	}
	return 0;
}
