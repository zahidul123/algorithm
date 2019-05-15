#include<stdio.h>
int main()
{
    int K,W=1,Z,m,O,P;
    scanf("%d",&Z);
    for(K=1; K<=Z; K++)
    {
        scanf("%d",&P);
        W=P-1;
        for (m=1; m<=P; m++)
        {
            for (O=1; O<=W; O++)
                printf(" ");
            W--;
            for(O=1; O<=2*m-1; O++)
                printf("*");
            printf("\n");
        }
        W=1;
        for(m=1; m<=P; m++)
        {
            for(O=1; O<=W; O++)
                printf(" ");
            W++;
            for(O=1; O<=2*(P-m)-1; O++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
