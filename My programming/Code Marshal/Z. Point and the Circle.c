#include<stdio.h>>
#include<math.h>
int main()
{
    int tc,i=1;
    double p1,p2,r,c1,c2;
    scanf("%d",&tc);
    while(tc>=i)
    {
        scanf("%lf%lf%lf%lf%lf",&r,&c1,&c2,&p1,&p2);

        double dc=sqrt(pow((c1-p1),2)+pow((c2-p2),2));
        if(dc<r)
        {
            printf("Case %d: YES\n",i);
        }
        else
        {
            printf("Case %d: NO\n",i);
        }
        i++;
    }

    return 0;
}

