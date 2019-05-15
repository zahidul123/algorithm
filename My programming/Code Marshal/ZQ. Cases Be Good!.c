#include<stdio.h>
int main()
{
  int f,g,h,m,k;
    scanf("%d",&f);
    for(g=1;g<=f;g++){
            k=1;
        scanf("%d",&h);
        for(m=1;m<=h;m++){
           k=k*m;
        }
        printf("Case %d: %d\n",g,k);
    }

    return 0;
}
