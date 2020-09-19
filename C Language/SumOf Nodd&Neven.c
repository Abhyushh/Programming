#include<stdio.h>
int main()
{
	int num , sum_odd=0 , sum_even=0, ctr=1 ;
	printf("Enter till which number");
	scanf("%d" , &num);
	
	while(ctr <= num)
	{
		if(ctr % 2 == 0)
		sum_even += ctr;
		else
		sum_odd += ctr;
		ctr++;
		
	}
		printf("The sum of even numbers is : %d", sum_even);
		printf("The sum of odd numbers is : %d", sum_odd);
		
		return 0;
}

