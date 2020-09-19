#include<stdio.h>
#include<string.h>
#include<math.h>
void calculate_the_max(int n, int k)
{
    int maxOR = 0;
    int maxAND = 0;
    int maxXOR = 0;
    int a,b;
    for(a=1; a<n; a++){
        for(b=a+1; b<=n; b++){
        if((a&b)>maxAND && (a&b)<k)
        {
            maxAND = a&b;
        }
        if((a|b)>maxOR && (a|b)<k)
        {
            maxOR = a|b;
        }
        if((a^b)>maxXOR &&(a^b)<k)
        {
            maxXOR = a^b;
        }
    }
}

        printf("%d %d %d",maxAND, maxOR, maxXOR );
}
int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_max(n, k);
}
