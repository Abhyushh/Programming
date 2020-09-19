#include<stdio.h>
int main()
{
	int i , sum , n;
	
	printf("Till which number ? ");
	scanf("%d", &n);
	
	for(i=1 , sum = 0 ; i<=n ; i++)
	{
	printf("\n%d" , i);
	sum = sum + i;
}
	printf("\nSum of these numbers is : %d" , sum);
	
	return 0;
}
