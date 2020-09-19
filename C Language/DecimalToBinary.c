#include<stdio.h>
#include<math.h>
long long dectobin(int n);
int main()
{
	int n;
printf("Enter the decimal number\n");
scanf("%d", &n);
printf("decimal in %d = binary in %lld", n , dectobin(n));
return 0;	
}
long long dectobin(int n)
{
	int i = 1, remainder, num = 0, temp = 1;
	while(n != 0)
{
	remainder = n % 2;
	n = n/2;
	num = num + temp*remainder;
	temp = temp*10;
}
return num;
}
