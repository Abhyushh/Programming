#include<stdio.h>
float average(int a, int b)
{
	float avg;
	avg= (a+b)/2;
	return avg;	
}
int main()
{
	int a, b;
	float c;
	printf("Enter two numbers");
	scanf("%d %d", &a, &b);
	c = average(a, b);
	printf("Average is %f", c);
	return 0;
}
