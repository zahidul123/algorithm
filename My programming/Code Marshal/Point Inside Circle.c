#include<stdio.h>


int main()
{
    int w,g,cx1,cx2,cy1,cy2,cr,ps;
    long long int su,hu,ml;
    scanf("%d",&w);
    for(g=1;g<=w;g++){
        scanf("%d%d%d%d%d",&cr,&cx1,&cy1,&cx2,&cy2);
        su=((cx2-cx1)*(cx2-cx1));
        hu=((cy2-cy1)*(cy2-cy1));
        ml=(su+hu);
        ps=sqrt(ml);
        if(cr>ps){
            printf("Case %d: YES\n",g);
        }
        else{
            printf("Case %d: NO\n",g);
        }
    }
    return 0;
}
