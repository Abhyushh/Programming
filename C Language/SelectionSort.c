#include<stdio.h>
int main()
{
	int i;
	int a[i];
	printf("Enter array elements");
	for(i=0; i<5; i++)
	{
	scanf("%d", &a[i]);
	}
		printf("Array elements are:");
	for(i=0; i<5; i++)
	{
		printf("%d", a[i]);
	}

for(i=0; i<5; i++)
{
	int smallest=i;
	for(int j=i+1; j<5; j++)
	{
		if(a[j]<a[smallest])
		smallest= j;
	}
	int temp= a[i];
	a[i]=a[smallest];
	a[smallest]=temp;
	
}
for(i=0; i<5; i++)
printf("\n%d ", a[i]);
return 0;	
}
