/*
 ============================================================================
 Name        : EX2_Vowel_Or_Constant.c
  Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	char alpha;
	printf("Enter an Alphabet :");
	scanf("%c",&alpha);
	switch(alpha)
	{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("%c is a vowel", alpha);
		break;
	default:
		printf("%c is a constant", alpha);
	}
	return 0;
}
