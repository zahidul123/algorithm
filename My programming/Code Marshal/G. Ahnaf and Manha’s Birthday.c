#include<stdio.h>
main()
{
    long long int df,bf,gf;
    scanf("%lld%lld",&df,&bf);
    gf=df+(2*df)+(2*df-bf)+(2*(2*df-bf));
    printf("%lld\n",gf);
    return 0;
}
