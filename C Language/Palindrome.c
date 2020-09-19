//Palindrome:- It is a number or a word or a phase, if read backwards
//gives same number or a word or a phase as it is being read forward.

#include<stdio.h>
int main()
{
    int num, temp, rem, result=0;
    printf("Enter the number");
    scanf("%d", &num);

    temp=num;
    while(temp!=0)
    {
        rem = temp%10;
        result = result*10 + rem;
        temp = temp/10;
    }
    printf("Reversed number is:%d", result);
    if(result==num)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    return 0;
}
