#include<stdio.h>
int main()
{
	int day;
	printf("Enter number of days");
	scanf("%d",&day);
    int month;
    month=(day/30);
	printf("Months=%d",month);
	int days;
	days=day % 30;
	printf("Days=%d",days);
	return 0;
	}
