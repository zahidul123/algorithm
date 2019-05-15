#include<stdio.h>
int main()
{
    int N,i,j,T,count=0;
    if(1<T<100)
    {
        scanf("%d",&T);
    }
    if(1<N<1000)
    {
        scanf("%d",&N);
    }
    for(i=1; i<=T; i++)
    {
        for(j=0; j<=N; j++)
        {
            if(j%3==0)
            {
                if(j!=N)
                count++;
            }
            printf("Case %d: %d\n",i,count);
        }
    }
    return 0;
}
