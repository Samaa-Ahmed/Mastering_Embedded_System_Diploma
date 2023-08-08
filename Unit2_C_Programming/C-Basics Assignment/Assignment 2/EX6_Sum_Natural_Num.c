/*
 ============================================================================
 Name        : EX6_Sum_Natural_Num.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);
	int num,i;
	int sum=0;
	printf("enter an integer:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
		{
		sum+=i;
		}
printf("Sum=%d",sum);
	return 0;
}
