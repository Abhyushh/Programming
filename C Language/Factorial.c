#include<stdio.h>
int main()
{
	int i , num , fact = 1;
	
	printf("Enter a number");
	scanf("%d" , &num);
	
	while(num > 0)
	{
	
	fact = (fact * num);
	num--;
}
	printf("Factorial of number is : %d", fact);
	return 0;
	}
