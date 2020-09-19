#include<stdio.h>
int cube(int);
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d", &a);
	printf("Cube of the number is: %d", cube(a));
		return 0;
}
int cube(int x)
{
	return x*x*x;
}
