#include<stdio.h>
int main(){
    int k,a,b;
    scanf("%d%d",&a,&b);
    if(a<=1000&&b<=1000&&a<=b)
    {
        for(k=a;k<=b;k++)
        {
            printf("%d",k);
            if(k!=b)
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
