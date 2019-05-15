#include<stdio.h>
int main()
{

    int T,i,O;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d",&O);
        if(O%3==0&&O%7==0)
        {
            printf("%d is divisible by 3\n",O);
            printf("%d is also divisible by 7\n",O);
        }
        else if(O%3==0)
        {
            printf("%d is divisible by 3\n",O);
        }
        else
        {
            printf("%d is not divisible by 3\n",O);
        }
    }
    return 0;
}
