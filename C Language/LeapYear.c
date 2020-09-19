#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(year%4==0){
	
	printf("Leap year");
	
}
else if(year%100==0 && year%400==0)
{
	printf("\nLeap year");
	
}
return 0;
}
