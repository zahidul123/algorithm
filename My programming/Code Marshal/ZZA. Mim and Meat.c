#include<stdio.h>
int main()
{
    int tc,lc,sum,ln,df,df1,pl,hl,mx,lo,kl,ml;
    scanf("%d",&tc);
    for(lc=1; lc<=tc; lc++)
    {
        sum=0,mx=1,lo=1,kl=0,ml=1;
        scanf("%d",&ln);
        for(pl=0; pl<ln; pl++)
        {
            scanf("%d%d",&df,&df1);
            if(lc%2!=0)
            {
                hl=(df*df1);
               sum=sum+hl;
            }
            else
            {
                if(df1>mx)
                {
                    mx=df1;

                }
                else
                {
                    if(df1<=lo)
                    {
                        lo=df1;
                    }
                    kl=kl+df;
                    sum=kl*lo;
                }
                if(df<=ml){
                    ml=df;
                    hl=mx*ml;
                }
               sum=sum+hl;
            }
        }

        printf("%d\n",sum);
    }
}
