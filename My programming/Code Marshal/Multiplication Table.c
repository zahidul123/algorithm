#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        printf("Case %d:\n",i);
        for(j=1;j<=10;j++){
           k=n*j;
           printf("%d * %d = %d\n",n,j,k);
        }
    }
    return 0;
}
