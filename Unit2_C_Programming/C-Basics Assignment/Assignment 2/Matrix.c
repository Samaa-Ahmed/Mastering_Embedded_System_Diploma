/*
 ============================================================================
 Name        : Matrix.c
 Author      : Samaa Ahmed
 Unit 2 Lesson 3 Lab
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);

	int i,j;
	for(j=0;j<10;j++)
	{
		for(i=j;i<10;i++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}

	return 0;
}

