#include<stdio.h>
int main()
{
    int M,i,N,O,Sum=0;
    scanf("%d",&N);
   for(i=1; i<=N; i++)
        {
            Sum=0;
            scanf("%d",&M);
            for(O=0;O<=M;O++){
                if(O%3==0){
                    Sum++;
                }
            }
            printf("Case %d: %d\n",i,Sum);
        }
    return 0;
}
