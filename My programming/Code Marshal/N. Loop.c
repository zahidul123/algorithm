
#include<stdio.h>
int main()
{
    int i,A;
    scanf("%d",&A);
    if(A>=1&&A<=1000)
    {
        for(i=A; i>=1; i--)
        {
            printf("%d\n",i);

        }
    }

    return 0;
}
