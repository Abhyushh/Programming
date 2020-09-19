#include<stdio.h>
int main()
{
	int height,i,j;
	printf("Enter height");
	scanf("%d", &height);
	for(i=height;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
