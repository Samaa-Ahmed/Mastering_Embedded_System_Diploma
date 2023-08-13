/*
 ============================================================================
 Name        : EX4-Multiply_Two_Floating_Numbers.c
 Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	float num1 , num2 ;
	float product ;
	printf("Enter Two Numbers :");
	scanf("%f %f", &num1,&num2);
	product= num1 * num2 ;
	printf("Product : %f ", product);

	return 0;
}
