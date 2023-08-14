/*
 ============================================================================
 Name        : EX1_Frequency_OF_Character.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
setbuf(stdout,NULL);

char string[100];
char ch;
int frequency=0;

printf("Enter a string:\n");
gets(string);

printf("Enter a character to fing frequency for :");
scanf("%c",&ch);

for (int i=0; string[i]!='\0';i++)
{
	if (string[i]==ch)
	{
		frequency++;
	}
}
printf("The Frequency of character %c = %d", ch,frequency);
	return 0;
}
