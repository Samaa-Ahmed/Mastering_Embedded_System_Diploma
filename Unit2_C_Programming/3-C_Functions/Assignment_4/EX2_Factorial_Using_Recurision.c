/*
 ============================================================================
 Name        : EX2_Factorial_Using_Recurision.c
 Author      : Samaa Ahmed
 Uint2     : Lesson5 Function >> Assignment4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int x)
{
	if (x<0)
	{
		return 0;
	}
	if(x==1)
	{
		return 1 ;
	}
	else
	{

		return x*factorial (x-1);
	}
}
int main()
{
	setbuf(stdout,NULL);

	int num ,fact ;
	printf("enter a positive integer number: ");
	scanf("%d",&num);
	fact=factorial(num);
	printf("Factorial of %d = %d",num,fact );
	return 0;
}
