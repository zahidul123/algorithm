
#include<stdio.h>
int main()
{
    int B,i,A,C,sum;
    scanf("%d",&A);
   for(i=1; i<=A; i++)
        {
            sum=0;
            scanf("%d",&B);
            for(C=0;C<=B;C++){
                if(C%3==0){
                    sum++;
                }
            }
            printf("Case %d: %d\n",i,sum);
        }

    return 0;
}

