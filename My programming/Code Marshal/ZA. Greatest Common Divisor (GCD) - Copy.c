#include<stdio.h>
int main()
{
    int l,k,p,y,z,h;
    scanf("%d",&h);
    for(l=1; l<=h; l++)
    {
        scanf("%d%d",&p,&k);
        z=1;
        for(y=2; y<=p; y++)
        {
            if(p%y==0&&k%y==0)
            {
                z=y;
            }
        }
        printf("%d\n",z);
    }
}
