#include<stdio.h>
int main()
{
	int temp, n, a[500] , i, j;
	printf("Enter number of elements in an array");
	scanf("%d", &n);
	printf("Enter %d elements:", n);
	for(i=0; i<n; i++)
	scanf("%d", &a[i]);
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
}
  printf("Sorted array is:");
for(i=0; i<n; i++)
{

printf("%d\n", a[i]);
}
if(n % 2 == 0)
printf("Median = %d", (a[n/2]) + a[(n/2) - 1])/2;
else
printf("Median = %d", a[n/2]);
return 0;
}
					
		
