#include<stdio.h>
int main()
{
    int Go,Ok,Na,LK,To,Uu;
    scanf("%d",&Uu);
    for(Na=1;Na<=Uu;Na++){
        long long res1=0,res2=1,res3=1,res=0;
        scanf("%d%d",&Go,&Ok);
       LK=1;
        while(LK<=Go){
                res2=res2*LK;
                LK++;
        }
        res1=Go-Ok;
        for(To=1;To<=res1;To++){
            res3=res3*To;
        }
        res=res2/res3;
        printf("Case %d: %lli\n",Na,res);
    }
    return 0;
}
