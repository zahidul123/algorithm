#include <stdio.h>
int main()
{
    int n, i,t, flag = 0,j;
    scanf("%d",&t);
    for(j=1; j<=t; j++)
    {
            scanf("%d", &n);
    for(i=2; i<=n/2; ++i){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("%d\n",n);
    else
        printf("%d\n",n);

    return 0;
    }
}
