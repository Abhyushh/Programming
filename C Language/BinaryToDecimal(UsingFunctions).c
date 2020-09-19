#include<stdio.h>
#include<math.h>
int bintodec(long long n);
int main()
{
	long long n;
	printf("Enter the binary number");
	scanf("%lld", &n);
	printf("%lld in binary = %d in decimal", n, bintodec(n));
	return 0;
}
int bintodec(long long n)
{
	int remainder, binsum = 0, i = 0;
	while(n != 0)
	{
	remainder = n % 10;
	n = n/10;
	binsum = binsum + remainder*pow(2,i);
	++i;
}
return binsum;
}
