#include <stdio.h>
int main()
{
    int i, j, t,l, sum=0;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d", &j, &l);
        sum = j+l;
        printf("Case %d: %d\n", i,sum);
    }
    return 0;

}

