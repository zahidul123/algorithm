#include<stdio.h>
int main()
{
    int y,o;
    intt lo,hp,h,z,s,m,dl,qn,mn;
    scanf("%d",&y);
    for(o=1; o<=y; o++)
    {
        scanf("%d%d",&h,&m);
        intt f[h][m];
        for(z=0; z<h; z++)
        {
            for(s=0; s<m; s++)
            {
                scanf("%d",&lo);
                f[z][s]=lo;
            }
        }
        dl=0;
        scanf("%d",&hp);
        for(z=0; z<h; z++)
        {
            for(s=0; s<m; s++)
            {
                if(f[z][s]==hp)
                {
                    dl=1;
                    qn=z;
                    mn=s;
                   break;
                // printf("Case %d: %d %d\n",o,qn+1,mn+1);
                }
            }
        }
       if(dl==1)
        {
            printf("Case %d: %d %d\n",o,qn+1,mn+1);
        }
        else
        {
            printf("Case %d: Not Found!\n",o);
        }
       // if(dl==0){
       //    printf("Case %d: Not Found!\n",o);
        //}

    }
    return 0;
}


