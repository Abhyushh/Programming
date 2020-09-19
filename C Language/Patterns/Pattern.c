#include<stdio.h>
int main()
{
	int height, i, j;
	printf("Enter height");
	scanf("%d", &height);
	for(i=height; i>=1; i--)
	{
		for(j=1; j<=height-i; j++)
		{
			printf(" ");
		}
		for(int k=1; k<=height; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
