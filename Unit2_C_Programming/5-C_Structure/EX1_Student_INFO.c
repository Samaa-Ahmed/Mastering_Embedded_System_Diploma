/*
 ============================================================================
 Name        : EX1_Student_INFO.c
 Author      : Samaa Ahmed
 Uint2     : Lesson6 Structure >> Assignment 5

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sstudent
{
	char name[100];
	int  roll_num ;
	float marks ;
}x;

int main()
{
	setbuf(stdout,NULL);



	printf("Enter information of students\n");
	printf("Enter Name:");
	gets(x.name);
	printf("Enter roll number :");
	scanf("%d",&x.roll_num);
	printf("enter mark:");
	scanf("%f",&x.marks);
	printf("displaying information\n");
	printf("name : %s \nRoll : %d \nmarks : %0.2f",x.name,x.roll_num,x.marks);


	return 0;
}
