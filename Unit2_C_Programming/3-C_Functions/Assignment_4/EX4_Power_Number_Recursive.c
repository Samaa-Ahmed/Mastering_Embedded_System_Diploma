/*
 ============================================================================
 Name        : EX4_Power_Number_Recursive.c
 Author      : Samaa Ahmed
 Uint2     : Lesson5 Function >> Assignment4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int base , int topower)
{
	if (topower==1)
	{
		return base;
	}
	else if (topower==0)
	{
		return 1 ;
	}
	return base * power(base,topower-1);
}
int main()
{
	setbuf(stdout,NULL);

	int a,b ;
	printf("Enter Base number: ");
	scanf("%d",&a);
	printf("\nEnter Power number: ");
	scanf("%d",&b);
	printf("%d ^ % d =%d ",a ,b, power(a,b));
	return 0;
}
