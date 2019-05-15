#include<stdio.h>

int main()
{
    int n,r,res,T,j;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
    scanf("%d%d",&n,&r);
    int p=rec(n);
    int q=rec(n-r);
    res=p/q;
    printf("Case %d: %d\n",j,res);
    }
    return 0;
}
int rec(int j)
{
    int q;
    if(j>0){
        return q=j*rec(j-1);
    }
    else
        return 1;

}
