#include<stdio.h>
int main()
{
    int i,j,b,t,n,ara[51][51];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            for(b=0; b<n; b++)
                scanf("%d",&ara[j][b]);
        }
        for(j=n-1; j>=n-1; j--)
            for(b=n-1; b>=n-1; b--)
                printf("%d",ara[j][b]);
        for(j=n-1; j>=n-1; j--)
            for(b=n-2; b>=0; b--)
                printf(" %d",ara[j][b]);
        for(j=n-2; j>=0; j--)
        {
            for(b=n-1; b>=0; b--)
                printf(" %d",ara[j][b]);
        }
        printf("\n");
    }
    return 0;
}

