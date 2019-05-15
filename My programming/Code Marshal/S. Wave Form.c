#include <stdio.h>
int main()
{
    int i, s,r,k,T,j,g;

    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        if(j!=1)
        {
            printf("\n");
        }
        scanf("%d",&r);
        g=r;
        for(i=1; i<=r; i++)
        {
            k=0;
            for(s=1; s<=g-i; s++)
            {
                printf(" ");
            }

            while(k != ((2*i)-1))
            {
                printf("*");
                k++;
            }
            printf("\n");
        }
        for(i=r-1; i>=1; i--)
        {
            k=0;
            for(s=g-i; s>=1; s--)
            {
                printf(" ");
            }

            while(k != ((2*i)-1))
            {
                printf("*");
                k++;
            }
            printf("\n");
        }

    }

    return 0;

}


