#include<stdio.h>
int main()
{
    int i,j;
    for(i=3;i>=0;i--){
        for(j=1;j<=i;j++){
            printf("%3c",i+64);
        }
        printf("\n");
    }
}

