#include<stdio.h>
int main()
{
    int h,l,p,m,s;
    scanf("%d",&h);
    for(l=1;l<=h;l++){
        scanf("%d",&p);
        s=0;
        for(m=2;m<=p/2;m++){
          if(p%m==0){
            s=1;
            break;
          }
          else
          {
              s=0;
              continue;
          }
        }
        if(s==1){
            printf("Case %d: NO\n",l);
        }
        else{
           printf("Case %d: YES\n",l);
        }
    }
}
