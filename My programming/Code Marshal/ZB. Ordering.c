/*#include<stdio.h>
int main()
{
    int tc,ab[50],cd[50],ef[50],gh[50],ac,cc,ec,gc,lp,tl,fl,bn,dj;
    scanf("%d",&tc);
    for(tl=1;tl<=tc;tl++)
    {
        scanf("%d",&bn);
        ac=0,cc=0,ec=0,gc=0;
        for(lp=0; lp<bn; lp++)
        {
            scanf("%d",&fl);
    if(fl%5==0)
        {
            ab[ac]=fl;
                ac++;
            }
            else if(fl%3==0)
        {
            cd[cc]=fl;
                cc++;
            }
            else if(fl%2==0)
        {
            ef[ec]=fl;
                ec++;
            }
            else
            {
                gh[gc]=fl;
                gc++;
            }
        }
        sort(ab,0,ac-1);
        sort(cd,0,cc-1);
        sort(ef,0,ec-1);
        sort(gh,0,gc-1);
        for(dj=0;dj<ac;dj++){
           printf("%d ",ab[dj]);
        }
        for(dj=0;dj<cc;dj++){
           printf("%d ",cd[dj]);
        }
        for(dj=0;dj<ec;dj++){
           printf("%d ",ef[dj]);
        }
        for(dj=0;dj<gc;dj++){
           printf("%d ",gh[dj]);
        }
    }
    printf("\n");
}
void sort(int mnar[1000],int fst,int lst)
{
    int pvt,j,cng,i;

    if(fst<lst)
    {
        pvt=fst;
        i=fst;
        j=lst;

        while(i<j)
        {
            while(mnar[i]>=mnar[pvt]&&i<lst)
                i++;
            while(mnar[j]<mnar[pvt])
                j--;
            if(i<j)
            {
                cng=mnar[i];
                mnar[i]=mnar[j];
                mnar[j]=cng;
            }
        }

        cng=mnar[pvt];
        mnar[pvt]=mnar[j];
        mnar[j]=cng;
        sort(mnar,fst,j-1);
        sort(mnar,j+1,lst);

    }
}
*/
#include <stdio.h>
int main()
{
    int ak[1000],km,Tc,rn,i,bj,sm,cc=0;
    scanf("%d",&Tc);
    for(km=1; km<=Tc; km++)
    {
        scanf("%d",&rn);
        for (i = 1; i <= rn; i++)
            scanf("%d", &ak[i]);
        for (i = 1 ; i <= rn; i++)
        {
            for (bj = 1 ; bj < rn; bj++)
            {
                if (ak[bj] < ak[bj+1])
                {
                    sm = ak[bj];
                    ak[bj] = ak[bj+1];
                    ak[bj+1] = sm;
                }
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if(ak[i] % 5 == 0)
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i] % 3 == 0) && (ak[i] % 5 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i] % 2 == 0) && (ak[i]%5 != 0) && (ak[i]%3 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        for ( i = 1 ; i <= rn ; i++ )
        {
            if((ak[i]%5 != 0) && (ak[i]%3 != 0) && (ak[i]%2 != 0))
            {
                cc++;
                if(cc==rn)
                    printf("%d\n", ak[i]);
                else
                    printf("%d ", ak[i]);
            }
        }
        cc=0;
    }
    return 0;
}
