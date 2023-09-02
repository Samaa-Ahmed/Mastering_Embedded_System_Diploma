/*
 ============================================================================
 Name        : EX4_Store_Student_INFO.c
 Author      : Samaa Ahmed
 Uint2     : Lesson6 Structure >> Assignment 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUMOFSTUDENTS 4
struct Sstudent{
	char name[30];
	int roll;
	float marks;
};

struct Sstudent Read(){
	struct Sstudent st;
	printf("Enter roll number: ");
	scanf("%d",&st.roll);
	printf("Enter student name: ");
	scanf("%s",st.name);
	printf("Enter marks: ");
	scanf("%f",&st.marks);
	return st;
}

void Display(struct Sstudent st){
	printf("information of roll number %d:\n",st.roll);
	printf("student name: %s\n",st.name);
	printf("marks: %0.2f\n",st.marks);
}


int main(){

	setbuf(stdout,NULL);
	struct Sstudent student[NUMOFSTUDENTS];
	int i;
	printf("Enter information of students:\n");
	for(i=0;i<NUMOFSTUDENTS;i++){
		student[i]=Read();
	}
	printf("\nDisplaying information:\n");
	for(i=0;i<NUMOFSTUDENTS;i++){
		Display(student[i]);

	}
	return 0;
}
