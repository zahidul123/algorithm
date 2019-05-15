#include <stdio.h>
int main()
{
    int k,N,T,i,space,star;
    if(1<T<100)
    {
        scanf("%d",&T);
    }
    for(k=1; k<=T; k++)
    {
        if(0<N<50)
        {
            scanf("%d",&N);
        }
        for(i=1; i<=N; i++)
        {
            for(space=N-i; space>0; space--)
            {
                printf(" ");
            }
            for(star=1; star<=(i*2)-1; star++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
