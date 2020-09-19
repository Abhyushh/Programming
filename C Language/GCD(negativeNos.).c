#include<stdio.h>
int main()
{
	int n1, n2;
	printf("Enter two numbers");
	scanf("%d %d", &n1, &n2 );
	
	n1= (n1>0) ? n1 : -n1;
	n2= (n2>0)  ? n2 : -n2;
	while(n1 != n2)
	{
		if(n1 > n2)
		n1-=n2;
		else
		n2-=n1;
		
	}
printf("GCD of two numbers is:%d", n1);
return 0;
}
