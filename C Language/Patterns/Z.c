#include<stdio.h>
int main()
{
	int height, i, j;
	printf("Enter height");
	scanf("%d", &height);
	for(i=1; i<=height; i++)
	{
		for(j=height ;j>=1; j--)
		{
			if(i==j || i==1 || i==height)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
return 0;
}
