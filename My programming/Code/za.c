#include <stdio.h>
int main()
{
    int a, b, gcd,i,j,s;
    scanf("%d",&s);
    for (j=0; j<=s; j++){
    scanf("%d%d", &a, &b);
     for (i=1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
            gcd=i;
    }
    printf("%d\n", gcd);
    }
    return 0;
}
