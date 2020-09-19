#include<stdio.h>
int main()
{
	int a[30], i, sum=0, avg=0;
	printf("Enter marks of students:");
	for(i=0; i<30; i++)

		
	scanf("%d", &a[i]);

	for(i=0; i<30; i++)
	sum=sum+a[i];
	printf("Sum is: %d", &sum);
	avg= sum/30;
	printf("Average is:%d", avg);
	return 0;


}

