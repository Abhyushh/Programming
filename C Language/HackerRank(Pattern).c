#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int len = (2*n)-1;
    int vd, hd, netd;
    int i, j;
    for(i=1; i<=len; i++){
        for(j=1; j<=len; j++){
            vd = i<(len-i) ? (i-1) : (len-i);
            hd = j<(len-j) ? (j-1) : (len-j);
            netd = (vd>hd) ? hd : vd;
            printf("%d ", (n-netd));
        }
        printf("\n");
    }
    return 0;
}
