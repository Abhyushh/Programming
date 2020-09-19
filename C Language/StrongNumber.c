//Strong Number:- A number in which sum of factorials of individual digits of a number is equal to the
//original number.

#include<stdio.h>
int main()
{
    int num, fact=1, sum=0, rem, temp;
    printf("Enter a number");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
    {
        rem = temp%10;
    for(int i=1; i<=rem; i++)
    {
        fact= fact*i;
    }
    sum = sum+fact;
    fact = 1;
    temp = temp/10;
    }
    printf("Final number is:%d", sum);
    //printf("Factorial of number is:%d", fact);
    return 0;
}
