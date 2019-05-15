#include<stdio.h>
int main()
{
    int Bl,i,Al;
    scanf("%d%d",&Al,&Bl);

        for(i=Al; i<=Bl; i++)
        {
            printf("%d",i);
            if(i!=Bl){
                printf(" ");
            }

        }

    printf("\n");
    return 0;
}

