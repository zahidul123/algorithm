#include<stdio.h>
main()
{
    long long int D,B,G;
    scanf("%lld%lld",&D,&B);
    G=D+(2*D)+(2*D-B)+(2*(2*D-B));
    printf("%lld\n",G);
    return 0;
}
