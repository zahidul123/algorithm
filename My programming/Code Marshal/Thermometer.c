#include<stdio.h>
int main(){
    int B;
    double F;
    scanf("%d",&B);
    F=((1.8*B)+32);
   if(F>98.4){
    printf("Fever\n");
   }
   else{
    printf("Not fever\n");
   }
    return 0;
}




