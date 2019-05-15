#include<stdio.h>
int main(){
    int t,s,n,j,sum=0,avg,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&s);
        for(j=1;j<=s;j++){
            scanf("%d",&n);
            sum=sum+n;
        }
        avg=sum/s;
        printf("Case %d: %d\n",i,avg);
        sum=0;
    }
}
