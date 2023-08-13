/*
 ============================================================================
 Name        : EX2_Print-Integer.c
 Unit 2 Lesson 3 C basics > Assignment 1
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num ;
	printf("Enter an Integer:");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("You entered : %d", num);

	return 0;
}
