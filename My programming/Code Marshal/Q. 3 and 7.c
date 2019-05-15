#include<stdio.h>
int main()
{

    int T,i,p;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&p);
        if(p%3==0&&p%7==0)
        {
            printf("%d is divisible by 3\n",p);
            printf("%d is also divisible by 7\n",p);
        }
        else if(p%3==0)
        {
            printf("%d is divisible by 3\n",p);
        }

        else
        {
            printf("%d is not divisible by 3\n",p);


        }

    }

}
