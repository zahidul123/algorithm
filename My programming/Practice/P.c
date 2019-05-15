#include<stdio.h>
int main()
{
    int X,i,Y,Z,Sum=0;;
    scanf("%d",&Y);
   for(i=1; i<=Y; i++)
        {
            scanf("%d",&X);
            for(Z=0;Z<=X;Z++){
                if(Z%3==0){
                    Sum++;
                }
            }
            printf("Case %d: %d\n",i,Sum);
        }
    return 0;
}
