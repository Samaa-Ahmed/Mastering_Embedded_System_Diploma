/*
 ============================================================================
 Name        : EX2_Two_Distances.c
  Author      : Samaa Ahmed
 Uint2     : Lesson6 Structure >> Assignment 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance
{
	int feet ;
	float inch ;
}d1,d2;

int main()
{
	setbuf(stdout,NULL);
	int sum_feet ;
	float sum_inch ;

	printf("Enter INFO for 1st distance \n");
	printf("Enter feet :");
	scanf("%d",&d1.feet);
	printf("Enter inch :");
	scanf("%f",&d1.inch);

	printf("Enter INFO for 2nd distance \n");
	printf("Enter feet :");
	scanf("%d",&d2.feet);
	printf("Enter inch :");
	scanf("%f",&d2.inch);

	sum_feet=d1.feet+d2.feet ;
	sum_inch=d1.inch+d2.inch ;

	if(sum_inch>=12)
	{
		sum_feet++ ;
		sum_inch=12-sum_inch ;
	}

	printf("sum of distance =%d '%0.1f' ",sum_feet,sum_inch);


	return 0;
}
