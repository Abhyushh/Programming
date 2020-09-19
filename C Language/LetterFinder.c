#include<stdio.h>
int main()
{
	char t;
	printf("Enter something");
	scanf("%c",&t);
	if(t>='a' && t<='z')
	printf("Small letter");
	else if(t>='A' && t<='Z')
	printf("Capital letter");
	else if(t>='0' && t<='9')
	printf("Number");
	else
	printf("Special Character");
	return 0;
}

