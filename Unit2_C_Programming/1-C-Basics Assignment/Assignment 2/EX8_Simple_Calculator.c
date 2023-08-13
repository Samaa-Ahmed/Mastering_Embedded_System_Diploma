/*
 ============================================================================
 Name        : EX8_Simple_Calculator.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
setbuf(stdout,NULL);

char operator;
float x,y ;
printf("Enter your operator either '+' or '-' or '*' or '/' :");
scanf("%c",&operator);
printf("Enter Two Numbers:");
scanf("%f %f", &x,&y);
switch(operator)
{
case'+':
	printf("%0.2f + %0.2f =%0.2f", x, y , x+y);
	break;
case'-':
	printf("%0.2f - %0.2f =%0.2f", x, y , x-y);
	break;
case'*':
	printf("%0.2f * %0.2f =%0.2f", x, y , x*y);
	break;
case'/':
	printf("%0.2f / %0.2f =%0.2f", x, y , x/y);
	break;
}

	return 0;
}
