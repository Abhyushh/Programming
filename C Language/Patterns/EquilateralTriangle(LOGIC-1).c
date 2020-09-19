#include<stdio.h>
int main()
{
    int r;
    printf("Enter number of rows of pyramid");
    scanf("%d",&r);
    for(int i=1; i<=r; i++)
    {
        for(int j=1; j<=(2*r-1); j++)
        {
            if(j>=r-(i-1) && j<=r+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
return 0;
}
