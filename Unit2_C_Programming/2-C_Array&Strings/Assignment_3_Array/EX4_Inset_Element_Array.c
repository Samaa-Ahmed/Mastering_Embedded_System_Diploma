/*
 ============================================================================
 Name        : EX4_Inset_Element_Array.c
 Author      : Samaa Ahmed
 Unit2     : Lesson4 Array&String >> Assignment3_Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{setbuf(stdout,NULL);

int n,i;
int inserted,location;
int Array[100];

printf("Enter Number of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
	scanf("%d",&Array[i]);
}
printf("Enter the number to be inserted:");
scanf("%d",&inserted);
printf("Enter the location:");
scanf("%d",&location);

for(int i=n;i!=(location-1);i--)
{
	Array[i]=Array[i-1];
}
Array[location-1]=inserted;
for(i=0;i<n+1;i++)
{
	printf("%d ",Array[i]);
}
return 0;
}

