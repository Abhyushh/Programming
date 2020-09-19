#include<stdio.h>
main()
{
	int exp, age, sal;
	printf("Are you experienced? Press 1 for yes and 0 for no");
	scanf("%d", &exp);
	printf("Enter your age?");
	scanf("%d", &age);
	sal = (exp)?((age>35)?6000: (age>28)?4800:3000):2000;
	printf("The sa;lary of the person is: %d", sal);
	
}

