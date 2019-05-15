#include<stdio.h>
int main()
{
    int z,h,bcb,tc,ncr,store[51][51];
   scanf("%d",&tc);
    for(z=1; z<=tc; z++)
    {
       scanf("%d",&ncr);
        for(h=0; h<ncr; h++)
        {
            for(bcb=0; bcb<ncr; bcb++)
               scanf("%d",&store[h][bcb]);
        }
        for(h=ncr-1; h>=ncr-1; h--)
            for(bcb=ncr-1; bcb>=ncr-1; bcb--)
                printf("%d",store[h][bcb]);
       for(h=ncr-1; h>=ncr-1; h--)
            for(bcb=ncr-2; bcb>=0; bcb--)
                printf(" %d",store[h][bcb]);
        for(h=ncr-2; h>=0; h--)
        {
            for(bcb=ncr-1; bcb>=0; bcb--)
                printf(" %d",store[h][bcb]);
        }
        printf("\n");
    }
    return 0;
}


