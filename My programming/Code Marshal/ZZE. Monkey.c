
#include<stdio.h>
int main()
{
    int sh,i,A,Cr,cnr;
    scanf("%d",&A);
   for(i=1; i<=A; i++)
        {

            scanf("%d",&sh);
            Cr=1;
            cnr=1;
            while(Cr==1){
                sh=sh-5;
                if(sh>0){
                    cnr++;

                }else{
                   Cr=0;
                }
            }
            printf("%d\n",cnr);
        }

    return 0;
}


