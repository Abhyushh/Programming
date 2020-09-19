#include<stdio.h>
int main()
{
	int a[10],i, min;
	printf("Enter 10 numbers");
	for( i=0; i<10; i++)
	scanf("%d", &a[i]);
min= a[0];
		for( i=1; i<10; i++)
		{
			if(a[i]<a[0])
			min= a[i];
		}
printf("Smallest numbers is: %d", min);
return 0;
}
