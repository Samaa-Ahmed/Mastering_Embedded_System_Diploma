/*
 ============================================================================
 Name        : EX5_Macro_Area.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14159
#define Area(r) (pi*r*r)

int main()
{
	setbuf(stdout,NULL);

	float radius ;
	printf("Enter Radius :");
	scanf("%f",&radius);
	printf("Area=%0.2f",Area(radius));

	return 0;
}
