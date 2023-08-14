/*
 ============================================================================
 Name        : EX3_Reverse_String.c
 Author      : Samaa Ahmed
 Uint2     : Lesson4 Array&String >> Assignment3_String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
setbuf(stdout,NULL);

char string[100];
char rev[100];
int len,i;

printf("Enter a string: ");
gets(string);
len= strlen(string);
for(i=0; string[i]!='\0' ;i++)
{
	rev[i]=string[len-1];
	len--;
}
rev[i]='\0';
printf("Reversed String is: %s", rev);
	return 0;
}
