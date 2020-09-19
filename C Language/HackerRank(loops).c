#include<stdio.h>
int main()
{
    char *s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "\0"};
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i = a; i <= b; i++)
    {
        if(i >=1 && i <= 9)
            printf("%s\n", s[i-1]);
        if(i > 9 && i%2 == 0)
            printf("even\n");
        else if(i > 9 && i % 2 != 0)
            printf("odd");

    }

}
