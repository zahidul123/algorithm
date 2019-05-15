#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    double x,y,x1,y1,r,k=0;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%lf%lf%lf%lf%lf",&r,&x,&y,&x1,&y1);
        k=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
        if (k<r){
            printf("Case %d: YES\n",i);
        }
        else {
            printf("Case %d: NO\n",i);
        }

    }
    return 0;
}
