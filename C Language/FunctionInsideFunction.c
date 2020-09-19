#include <stdio.h>

int div_2(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void div_6(int b)
{
    if( div_2(b)==1 && b%3 == 0 )
    {
        printf("Yes, the number is divisible by 6.\n");
    }
    else
    {
        printf("No, the number is not divisible by 6.\n");
    }
}

int main()
{
	
    div_6(25);
    div_6(65);
    return 0;
}
