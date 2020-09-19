#include<stdio.h>
int main()
{
	int size=50;
	int marks[size];
	for(int i= 0; i < size; i++)
	{
		printf("Enter marks of student %d\n", i+1);
		scanf("%d, &marks[i]");
		
	}
	
	for(int i = 0; i < size ; i++)
	printf("marks["i"]: %d\n", marks[i]);
	printf("\n");
	return 0;
}
