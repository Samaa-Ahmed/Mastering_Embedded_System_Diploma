/*
 ============================================================================
 Name        : EX2_Length_Of_String.c
 Author      : Samaa Ahmed
 Uint2     : Lesson4 Array&String >> Assignment3_String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{setbuf(stdout,NULL);

char string[100];
int length=0;
int i;

printf("Enter a string: ");
gets(string);

for(i=0;string[i] !='\0';i++)
{
	length++ ;
}
printf("Length of string = %d",length);
	return 0;
}
