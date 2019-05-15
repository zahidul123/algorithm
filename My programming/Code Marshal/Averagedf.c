#include<stdio.h>
int main(){
    int B,C,K,S,D;
    double l;
    scanf("%d%d%d%d%d",&B,&C,&S,&K,&D);
    if((B,C,D,S,K)>1&&(B,C,D,S,K)<1000){
         l=(S+B+C+D+K)/5.0;
    }
    printf("%.2lf\n",l);
    return 0;
}


