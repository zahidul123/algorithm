#include<stdio.h>
int main()
{
    int M;
    scanf("%d",&M);
    if(M%4==0)
    {
        if(M%100!=0)
        {
            printf("YES\n");
        }
        else
        {
            if(M%400==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
