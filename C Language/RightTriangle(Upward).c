#include <stdio.h>
int main()
{
    int height, i, j, k;
    printf("Enter height\n");
    scanf("%d",&height);

    //number of lines is equal to height
    for(i=1; i<=height; i++)
    {
        //number of stars in each line is
        //equal to the line number
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        //new line after each line
        printf("\n");
    }
    return 0;
}
