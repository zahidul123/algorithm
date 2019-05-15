#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(1<=n && n<=1000){
        for(i=n; i>=1; i--)
            printf("%d\n", i);

    }
}
