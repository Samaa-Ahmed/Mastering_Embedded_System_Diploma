/*
 ============================================================================
 Name        : EX6_Swap_Two_Num.c
 Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	float a,b;
	float temp ;
	printf("Enter value of a :");
	scanf("%f", &a);
	printf("Enter value of b :");
	scanf("%f", &b);
	temp=a ;
	a=b ;
	b=temp ;
	printf("After Swaping,Value of a=%f\n", a);
	printf("After Swaping,Value of b=%f", b);

	return 0;
}
