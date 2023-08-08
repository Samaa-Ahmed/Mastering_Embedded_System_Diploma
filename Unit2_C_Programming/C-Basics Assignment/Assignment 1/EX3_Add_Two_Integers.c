/*
 ============================================================================
 Name        : EX3_Add_Two_Integers.c
 Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x , y ;
	printf("Enter Two Integers:");
	fflush(stdin); fflush(stdout);
	scanf("%d  %d", &x,&y);
	int sum = x+y ;
	printf("Sum: %d", sum);
	return 0;
}
