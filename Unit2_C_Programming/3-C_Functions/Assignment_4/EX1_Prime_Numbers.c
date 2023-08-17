/*
 ============================================================================
 Name        : EX1_Prime_Numbers.c
 Author      : Samaa Ahmed
 Uint2     : Lesson5 Function >> Assignment4
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void prime_numbers(int intial , int last);

int main()
{
	setbuf(stdout,NULL);
	int s,e ;

	printf("Enter Two Numbers (Intervals): ");
	scanf("%d %d", &s, &e);
	prime_numbers(s,e);

	return 0 ;
}
void prime_numbers(int intial , int last)
{
	int i,j;
	int prime;

	printf("prime numbers between %d and %d is :\n",intial,last);
	for(i=intial ;i<=last ;i++)
	{

		if(intial<=0 && last==1)
		{
			printf("No Prime Numbers Exist Between 0 and 1");
			break;
		}

		if(i==1 || i==0)
		{continue;}
		prime=1;

		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				prime=0;
				break;
			}
		}
		if(prime==1){
			printf("%d ", i);
		}
	}
}
