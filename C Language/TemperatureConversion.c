#include<stdio.h>
int main()
{
	float temp,conv_temp;
	int choice;
	printf("Temperature change menu\n");
	printf("1. Farhenheit to Celcius\n");
	printf("2. Celcius to farhenheit\n");
	printf("Enter your option");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter temperature in farhenheit");
		scanf("%f",&temp);
		conv_temp=(temp-32)/1.8;
		printf("Temperature in celcius is: %f",conv_temp);
		
	}
if(choice==2)
{
	printf("Enter temperature in celcius");
		scanf("%f",&temp);
		conv_temp=(1.8*temp)+32;
		printf("Temperature in farhenheit is: %f",conv_temp);
		
}
return 0;
}


