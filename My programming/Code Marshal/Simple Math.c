#include<stdio.h>

int main()
{
     int gg,hh,pp,mm,zz,tt,ee;
     long long int ss,rr,ll;
     scanf("%d",&tt);
     for(gg=1;gg<=tt;gg++){
            ll=1,rr=1;
        scanf("%d%d",&hh,&pp);
        for(mm=hh;mm>0;mm--){
            ll=ll*mm;
        }
        ee=(hh-pp);
        for(zz=ee;zz>0;zz--){
            rr=rr*zz;
        }
        ss=(ll/rr);
        printf("Case %d: %lld\n",gg,ss);
     }
     return 0;
}


