#include<stdio.h>
int main()
{
	int x,y,z,max;
	printf("Enter three numbers");
	scanf("\n%d\n%d\n%d",&x,&y,&z);
	
	max=x;
	if(y>max);
	max=y;
	if(z>max);
	max=z;
	printf("Max of three numbers is:%d",max);
	return 0;
	
}
