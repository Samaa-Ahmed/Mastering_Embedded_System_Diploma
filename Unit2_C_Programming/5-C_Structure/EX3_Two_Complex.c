/*
 ============================================================================
 Name        : EX3_Two_Complex.c
 Author      : Samaa Ahmed
 Uint2     : Lesson6 Structure >> Assignment 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
	float real ;
	float img ;
};

struct Scomplex ReadComplex(){
	struct Scomplex num ;
	printf("enter real and imaginary respectively :");
	scanf("%f  %f",&num.real,&num.img);
	return num ;
}

struct Scomplex Add(struct Scomplex n1 , struct Scomplex n2)
{
	struct Scomplex sum ;
	sum.real=n1.real + n2.real ;
	sum.img= n1.img +n2.img ;
	return sum ;
}
int main()
{
	setbuf(stdout,NULL);

	struct Scomplex num1,num2,sumc ;

	printf("for 1st complex number : \n");
	num1=ReadComplex();
	printf("for 2nd complex number : \n");
	num2=ReadComplex() ;
	sumc=Add(num1,num2);
	printf("sum=%.1f + %.1f i",sumc.real,sumc.img);

return 0 ;

}
