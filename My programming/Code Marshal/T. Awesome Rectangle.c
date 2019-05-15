#include<stdio.h>
int main()
{
    int tc,lc,rec,rr,cl,zr;
    scanf("%d",&tc);
    for(lc=1; lc<=tc; lc++)
    {
        scanf("%d",&rec);
        for(zr=1; zr<=4; zr++)
        {
            for(rr=1; rr<=rec; rr++)
            {
                for(cl=1; cl<=9;cl++)
                {
                    if(zr!=1 && zr!=4 && cl!=1 && cl!=9)
                    {
                        printf(" ");
                    }
                    else
                    {
                        printf("*");
                    }
                }
               if(rr<rec)
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
