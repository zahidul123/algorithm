
#include<stdio.h>
int main()
{
    int B,i,A,C,sum;
    scanf("%d",&A);
   for(i=1; i<=A; i++)
        {
            scanf("%d%d",&C,&B);
            sum=(C+B);
            printf("Case %d: %d\n",i,sum);
        }

    return 0;
}

