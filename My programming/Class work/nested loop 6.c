#include<stdio.h>
int main()
{
    char c;
    c='A';
    int i,j;
    for(i=1;i<5;i++){
        for(j=1;j<=i;j++){
            printf("%3c",c);
            c++;
        }
        printf("\n");
        c='A';
    }
}

