/*
 ============================================================================
 Name        : EX3_Largest_Number.c
 Unit 2 Lesson 3 C basics > Assignment 2
 Author      : Samaa Ahmed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{setbuf(stdout,NULL);
    float num1,num2,num3 ;
	printf("Enter Three Numbers:");
	scanf("%f %f %f",&num1,&num2,&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("Largest Number=%f",num1);
		}
		else
		{
			printf("Largest Number=%f",num3);
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("Largest Number=%f",num2);
		}
		else
		{
			printf("Largest Number=%f",num3);
		}
	}

	return 0;
}
