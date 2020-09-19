#include<stdio.h>
int main()
{
	int x = 5,y = 10;
	y=x+y;
	x=y-x;
	y=y-x;
	printf("Swaped numbers are %d %d",x,y);
	return 0;
	
}
