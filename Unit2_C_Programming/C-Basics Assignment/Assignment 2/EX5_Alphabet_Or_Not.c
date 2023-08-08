/*
 ============================================================================
 Name        : EX5_Alphabet_Or_Not.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if( (c>='a'&& c<='z') || ( c>='A' && c<='Z') )
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);

	return 0;
}
