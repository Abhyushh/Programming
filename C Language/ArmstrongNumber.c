//Armstrong Number:- An Armstrong number of order n is a number in which each digit when multiplied by itself
//n number of times and finally added together, yields same number.

#include<stdio.h>
#include<math.h>
int main()
{
    int n, temp, count=0,rem,result,sum=0;
    printf("Enter a number");
    scanf("%d", &n);
    //count
    temp=n;
    while(temp!=0)
    {
    temp=temp/10;
    count++;
    }
    //printf("Number of digits in number are:%d", count);
    //sum
    temp = n;
    while(temp!=0)
    {
        rem = temp%10;
        result = pow(rem,count);
        sum = sum + result;
        temp = temp/10;
    }
    printf("Final number=%d", sum);
    if(sum==n)
        printf("Number is armstrong number");
    else
        printf("Number is not armstrong number");

    return 0;
}
