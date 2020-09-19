#include<stdio.h>
int main()
{
	int i,j;
	int a[3][3];
	printf("Enter elements");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d\n", &a[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		printf("\n");
		for(j=0; j<3; j++)
		printf("%d ", a[i][j]);
	}
	printf("Transpose of matrix is:");
	for(j=0; j<3; j++)
	{
		printf("\n");
		for(i=0; i<3; i++)
		printf("%d ", a[i][j]);
	}
	return 0;
}

