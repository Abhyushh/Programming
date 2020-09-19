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
	
	for(i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
		if(a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]= temp;
		}
	}
	}
	for(i=0; i<5; i++)
	printf("%d ", a[i]);
	return 0;
}
