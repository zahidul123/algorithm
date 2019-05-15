#include <stdio.h>
int main()
{
    int i,A,B,k,T,j,Go;
    scanf("%d",&T);
    for(j=1; j<=T; j++)
    {
        if(j!=1){
            printf("\n");
        }
        scanf("%d",&B);
        Go=B;
        for(i=1; i<=B;i++)
        {
            k=0;
           for(A=1; A<=Go-i; A++)
           {
                printf(" ");
            }

            while(k != ((2*i)-1))
            {
                printf("*");
                k++;
            }
            printf("\n");
        }
    }
    return 0;
}
