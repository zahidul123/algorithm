#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0&&x>=-100)
    {
        printf("%d\nNegative\n",x);
    }
    else
    {
        printf("%d\n",x);
    }
    return 0;
}
