#include<stdio.h>
int main()
{
	int x;
	float fx;
	
	for(x = -10 ; x <= 10 ; x+=2)
	{
	
	fx = (x*x + 1.5*x + 5)/(x-3);
	
	printf("For x = %d",x); printf("\tthe value of fx is : %f\n", fx);
	
}	
	return 0;
}
