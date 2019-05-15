#include<stdio.h>
int main(){
    int B,C,D;
    double l,n,p;
    scanf("%d%d%d",&B,&C,&D);
    p=sqrt(((C*C)-(4*B*D)));
    l=(-C+p)/(2*B);
    n=(-C-p)/(2*B);
    printf("%.2lf\n%.2lf\n",l,n);
    return 0;
}
