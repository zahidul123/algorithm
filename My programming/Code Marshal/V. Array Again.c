
#include <stdio.h>
int main()
{
    int fro,t,i,colo,n,repl[49][49];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(fro = 1; fro <= n; fro++)
        {
            for(colo = 1; colo <= n; colo++)
            {
                scanf("%d", &repl[fro][colo]);
            }
        }
        fro = 1;
        printf("Case %d:",i);
        while(n > 0)
        {

            for(colo = fro; colo <= n; colo++)
            {
                printf(" %d",repl[fro][colo]);
            }
            for(colo = fro+1; colo <= n; colo++)
            {
                printf(" %d", repl[colo][n]);
            }
            for(colo = n-1; colo > fro-1; colo--)
            {
                printf(" %d", repl[n][colo]);
            }
            for(colo = n-1; colo > fro; colo--)
            {
                printf(" %d", repl[colo][fro]);
            }
            fro++;
            n--;
        }
        printf("\n");
    }
    return 0;
}
