#include<stdio.h>
int main()
{
    int lp1,tsc;
    long int nup,lp2,sumn;
    scanf("%d",&tsc);
    for(lp1=1;lp1<=tsc;lp1++){
        scanf("%ld",&nup);
        long int store[nup];
        for(lp2=0;lp2<nup;lp2++){
            scanf("%ld",&store[lp2]);
        }
        scanf("%ld",&sumn);
        for(lp2=0;lp2<nup;lp2++){
            if(store[lp2]==sumn){
                printf("Case %d: %ld\n",lp1,lp2+1);
                break;
            }
        }
    }
    return  0;
}
