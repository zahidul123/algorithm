#include<stdio.h>
int main()
{
    int a,d;
    double b;
    char e;
    scanf("%d %d %lf %c",&a,&d,&b,&e);
    printf("%d %d\n",a,d);
    printf("%.2lf\n",b);
    printf("%c\n",e);
    return 0;

}
