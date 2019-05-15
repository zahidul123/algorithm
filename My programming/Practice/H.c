#include<stdio.h>
int main()
{
    int a,b,c;
    double x1,x2,p;
    scanf("%d%d%d",&a,&b,&c);
    p=sqrt(((b*b)-(4*a*c)));
    x1=(-b+p)/(2*a);
    x2=(-b-p)/(2*a);
    printf("%.2lf\n%.2lf\n",x1,x2);
    return 0;
}
