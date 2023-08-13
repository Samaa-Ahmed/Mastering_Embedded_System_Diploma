/*
 ============================================================================
 Name        : EX5_Find_ASCII_Value.c
 Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	char ch;
	printf("Enter your Character:");
	scanf("%c",&ch);
	printf("The ASCII Value of %c is : %d", ch ,ch);

	return 0;
}
