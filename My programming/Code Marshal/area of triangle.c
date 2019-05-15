#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,t,i=1,l;
    double p,res,n;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        p=(a+b+c)/2.0;
        p=p*(p-a)*(p-b)*(p-c);
        res=sqrt(p);
        l=(int)res;
        n=res-l;
        //if(n==.00){
           // printf("Case %d: %d\n",i,l);
       // }
      //  else
        printf("Case %d: %.10lf\n",i,res);
    }

    return 0;
}

