#include<stdio.h>
int main()
{
   double S,U,T,A;
   scanf("%lf%lf%lf",&U,&A,&T);
   S=(U*T)+((A*T*T)/2);
   printf("%.2lf\n",S);
   return 0;
}
