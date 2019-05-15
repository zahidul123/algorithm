#include<stdio.h>
int main()
{
    int d,i,j,y,w,c,x;
    scanf("%d",&w);
    for(d=1;d<=w;d++){
        if(d!=1){
            printf("\n");
        }
        scanf("%d",&x);
        c=x;
        for(i=1;i<=x;i++){
            for(j=1;j<c;j++){
                printf(" ");
            }
            c--;
            for(y=1;y<=2*i-1;y++){
                printf("*");
            }
            printf("\n");
        }
   }
   return 0;
}
