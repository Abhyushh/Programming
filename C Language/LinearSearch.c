#include<stdio.h>
int main()
{
	int a[50], i, x, n;
	printf("Enter number of elements in an array");
	scanf("%d", &n);
	printf("Enter %d elements of array:",n);
	 	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	printf("Enter the number to search");
	scanf("%d", &x);
		for(i=0; i<n; i++)
		{
			if(a[i] == x)
			{
			printf("%d is present in location %d", x, i+1);
		break;
	}
}
 	if(i == n)
		printf("%d is not present", x);
		return 0;
}


