/*
 ============================================================================
 Name        : EX7_Swap_Trick.c
Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	float a,b ;
	printf("enter value of a :");
	scanf("%f", &a);
	printf("enter value of b :");
	scanf("%f", &b);
	a=a+b ;
	b=a-b ;
	a=a-b ;
	printf("After swaping , value of a = %f \n", a);
	printf("After swaping , value of b = %f", b);
	return 0;
}
