/*
 ============================================================================
 Name        : EX3_Reverse_Sentence_Recursive.c
 Author      : Samaa Ahmed
 Uint2     : Lesson5 Function >> Assignment4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[],int l)
{
	static int i =0;
	char var;

	var=str[i];
	str[i]=str[l-1];
	str[l-1]=var;
	i++;
	if(i==l)
		return;
	reverse(str,l-1);

}

int main()
{
	setbuf(stdout,NULL);

	char string[100];
	int len ;

	printf("enter a sentence: ");
	gets(string);
	len= strlen(string);
	reverse(string,len);
	printf("%s",string);
	return 0;
}
