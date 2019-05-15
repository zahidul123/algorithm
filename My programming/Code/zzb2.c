#include <stdio.h>
int main()
{
    int i,n,sum;
    int a=0,b=1;
    scanf("%d",&n);
    printf("%d %d ",a,b);


    for(i=3; i<=n; i++){
        sum= a+b;
        a=b;
        b=sum;

    }
    printf(" %d ",sum);

}
