#include<stdio.h>
#include<string.h>

int main()
{
    int n, rem;
    scanf("%d", &n);
    int sum = 0;
    int temp = n;
    if(temp >= 10000 && temp <= 99999)
    {
    while(temp > 0)
    {
        rem = temp%10;
        sum = sum + rem;
        temp = temp / 10;
    }
    }
    else
        return 1;
    printf("%d", sum);
}
