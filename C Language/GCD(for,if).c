#include<stdio.h>
main()
{
	int n1, n2, gcd; 
	printf("Enter two numbers" );
	scanf("%d %d", &n1, &n2);
	for( int i=2; i <= n1 && i <= n2; ++i)
	{
		if(n1 % i == 0 && n2 % i == 0)
		gcd = i;
}
	printf("GCD of two numbers is: %d", gcd);

	
	
}
