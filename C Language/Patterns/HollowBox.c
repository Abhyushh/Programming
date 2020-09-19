#include<stdio.h>
int main()
{
	int height, i, j;
	printf("Enter height");
	scanf("%d", &height);
	for(i=1; i<=height; i++)
	{
		for(j=1; j<=height; j++)
		{
			if(i==1 || i==height || j==1 || j==height)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
