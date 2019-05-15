#include <stdio.h>
int main()
{
    int n, i, c = 0,j,k;
    scanf("%d",&k);
    for(j=1; j<=k; j++)
    {
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("Case %d: YES\n",j);
        }
        else
        {
            printf("Case %d: NO\n",j);
        }
    }
    return 0;
}
