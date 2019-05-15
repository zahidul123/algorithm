#include<stdio.h>
int main()
{
    int f;
    long long int g,h,m,k;
    scanf("%d",&f);
    for(g=1; g<=f; g++)
    {
        k=0;
        scanf("%lld",&h);
       while(h!=1){
        if(h%2==0){
           k++;
           h=h/2;
        }
        else{
            break;
        }
       }
        if(k%2!=0){
                printf("Egg First!\n");
        }
        else if(k%2==0){
            printf("Chicken First!\n");
        }
        else{
            printf("Chicken First!\n");
        }
    }

    return 0;

}
